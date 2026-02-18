class Solution {
public:
    vector<int> diStringMatch(string s) {
        int m=0;
        int n=s.size();
        vector<int>ans;
        for(int i=0;i<s.size();i++){
            if(s[i]=='I'){
                ans.push_back(m);
                m++;
            }
            else if(s[i]=='D'){
                ans.push_back(n);
                n--;
            }
        }
        ans.push_back(m);
        return ans;
    }
};