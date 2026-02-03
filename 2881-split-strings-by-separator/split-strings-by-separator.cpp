class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string>ans;
        string word="";
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                if(words[i][j]!=separator){
                    word=word+words[i][j];
                }
                else{
                    if(word!=""){
                        ans.push_back(word);
                        word="";
                    }
                }
            }
            if(word!=""){
                ans.push_back(word);
                word="";
            }
        }
        return ans;
    }
};