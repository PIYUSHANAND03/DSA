class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.size()!=2){
            string ans="";
            for(int i=0;i<s.size()-1;i++){
                ans.push_back((s[i]-'0'+s[i+1]-'0')%10);
            }
            s=ans;
        }
        if(s[0]==s[1]){
            return true;
        }
        else{
            return false;
        }
    }
};