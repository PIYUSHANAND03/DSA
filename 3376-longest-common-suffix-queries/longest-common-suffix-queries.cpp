class Solution {
public:

    vector<int> stringIndices(vector<string>& cont, vector<string>& query) {
        int n = cont.size();
        int q = query.size();
        vector<pair<string,int>> contrev;
        int small_len = INT_MAX;
        int small_ind = INT_MAX;
        for(int i = 0;i<n;i++){
            if(cont[i].size()<small_len){
                small_len = cont[i].size();
                small_ind = i;
            }
            reverse(cont[i].begin(),cont[i].end());  
            contrev.push_back({cont[i],i});
        }
        
        for(int i=  0;i<q;i++){
            reverse(query[i].begin(),query[i].end());
        }
        vector<int> ans(q,-1);
        sort(contrev.begin(),contrev.end());

        for(int i=0; i<q;i++){
            int sz = query[i].size();
            for(int len = sz; len>=1; len--){
                string pref = query[i].substr(0,len);
                pair<string,int> temp = {pref,-1};
                int match = lower_bound(contrev.begin(),contrev.end(),temp) - contrev.begin();

                int chosenlen = INT_MAX;
                int chosen = INT_MAX;
                while(match!=n){
                    if(contrev[match].first.compare(0,len,pref) != 0) break;

                    int idx = contrev[match].second;
                    int wordlen = cont[idx].size();
                    if(wordlen<chosenlen){
                        chosenlen= wordlen;
                        chosen = idx;
                    }
                    else if(wordlen==chosenlen){
                        if(chosen>idx){
                            chosen = idx;
                        }
                    }
                    match++;
                }
                if(chosen!=INT_MAX){
                    ans[i] = chosen;
                    break;
                }
            }
            if(ans[i]==-1){
                ans[i] = small_ind;
            }
        }
        return ans;
    }
};