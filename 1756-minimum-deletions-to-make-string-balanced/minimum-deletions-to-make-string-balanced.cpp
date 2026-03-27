class Solution {
public:
    int minimumDeletions(string s) {
        int a_count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'){
                a_count++;
            }
        }
        int b_count=0;
        int ans=INT_MAX;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'){
                a_count--;
            }
            ans=min(ans, a_count+b_count);
            if(s[i]=='b'){
                b_count++;
            }
        }
        return ans;
    }
};