class Solution {
public:
    int minSteps(string s, string t) {
        int result=0;
        vector<int> count(26, 0);
        for(int i=0;i<s.size();i++){
            count[s[i]-'a']++;
            count[t[i]-'a']--;
        }
        for(int i:count){
            if(i>0){
                result=result+i;
            }
        }
        return result;
    }
};