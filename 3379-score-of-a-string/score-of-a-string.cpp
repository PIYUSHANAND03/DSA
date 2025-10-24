class Solution {
public:
    int scoreOfString(string s) {
        int ans=0, n=0;
        for(int i=1;i<s.size();i++){
            ans=abs(s[i-1]-s[i]);
            n=n+ans;
        }
        return n;
    }
};