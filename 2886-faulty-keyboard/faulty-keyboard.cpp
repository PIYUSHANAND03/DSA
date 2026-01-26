class Solution {
public:
    string finalString(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]==105){
                int j=0,k=ans.size()-1;
                while(j<k){
                    swap(ans[j],ans[k]);
                    j++;
                    k--;
                }
            }
            else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};