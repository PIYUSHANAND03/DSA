class Solution {
public:
    string greatestLetter(string s) {
        char maxi=0,ans;
        for(int i=0;i<s.size();i++){
            for(int j=0;j<s.size();j++){
                if((s[i]==s[j]-32 && i!=j) || (s[i]-32==s[j] && i!=j)){
                    ans=toupper(s[i]);
                    maxi=max(maxi,ans);
                }
            }
        }
        if(maxi==0){
            return "";
        }
        return string(1,maxi);
    }
};