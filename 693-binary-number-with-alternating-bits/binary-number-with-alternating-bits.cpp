class Solution {
public:
    bool hasAlternatingBits(int n) {
       string ans="";
       int div;
       while(n>0){
            div=n%2;
            ans.push_back(div);
            n=n/2;
       }
       reverse(ans.begin(),ans.end());
       for(int i=0;i<ans.size()-1;i++){
            if(ans[i]==ans[i+1]){
                return false;
            }
       }
       return true; 
    }
};