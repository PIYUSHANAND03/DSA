class Solution {
public:
    string sortVowels(string s) {
        string vowel="";
        string ans="";
        int k=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                vowel.push_back(s[i]);
            }
        }
        sort(vowel.begin(),vowel.end());
        for(int j=0;j<s.size();j++){
            if(s[j]!='a' && s[j]!='e' && s[j]!='i' && s[j]!='o' && s[j]!='u' && s[j]!='A' && s[j]!='E' && s[j]!='I' && s[j]!='O' && s[j]!='U'){
                ans.push_back(s[j]);
            }
            else{
                ans.push_back(vowel[k]);
                k++;
            }
        }
        return ans;
    }
};