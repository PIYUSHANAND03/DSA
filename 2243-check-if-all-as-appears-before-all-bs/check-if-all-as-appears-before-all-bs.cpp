class Solution {
public:
    bool checkString(string s) {
        for(int i=0;i<s.size();i++){
            if(s[i]==98 && s[i+1]==97){
                return false;
            }
        }
        return true;
    }
};