class Solution {
public:
    string generateTheString(int n) {
        string alpha="abcdefghijklmnopqrstuvwxyz";
        string ans="";
        if(n%2==1){
            for(int i=0;i<n;i++){
                ans.push_back(alpha[0]);
            }
        }
        if(n%2==0){
            for(int i=0;i<n-1;i++){
                ans.push_back(alpha[0]);
            }
            ans.push_back(alpha[1]);
        }
        return ans;
    }
};