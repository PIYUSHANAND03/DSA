class Solution {
public:
    int minimumChairs(string s) {
        int ans=0,chair=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='E'){
                chair++;
            }
            else{
                chair--;
            }
            ans=max(ans,chair);
        }
        return ans;
    }
};