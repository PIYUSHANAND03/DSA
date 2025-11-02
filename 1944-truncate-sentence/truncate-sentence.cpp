class Solution {
public:
    string truncateSentence(string s, int k) {
        int count=0;
        string ans="";
        for(int i=0;i<s.size();i++){
            if(count<k){
                if(s[i]==' '){
                    count++;
                    if(count==k){
                        break;
                    }
                }
                ans=ans+s[i];
            }
        }
        return ans;
    }
};