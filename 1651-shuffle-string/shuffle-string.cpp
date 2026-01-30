class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<char>ans(s.size());
        for(int i=0;i<s.size();i++){
            ans[indices[i]]=s[i];
        }
        string ans2="";
        for(int i=0;i<ans.size();i++){
            ans2.push_back(ans[i]);
        } 
        return ans2;
    }
};