class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        for(int i=0;i<words.size();i++){
            int j=0;
            if(words.size()!=s.size()){
                return false;
            }
            if(words[i][j]!=s[i]){
                return false;
            }
        }
        return true;
    }
};