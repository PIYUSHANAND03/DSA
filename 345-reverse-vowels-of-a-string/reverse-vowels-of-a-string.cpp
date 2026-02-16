class Solution {
public:
    string reverseVowels(string s) {
        int i=0, j=s.size()-1;
        while(i<j){
            char x=tolower(s[i]);
            char y=tolower(s[j]);
            if((x=='a' || x=='e' ||  x=='i' || x=='o' || x=='u') && (y=='a' || y=='e' ||  y=='i' || y=='o' || y=='u')){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(!(x=='a' || x=='e' ||  x=='i' || x=='o' || x=='u')){
                i++;
            }
            else{
                j--;
            }
        }
        return s;
    }
};