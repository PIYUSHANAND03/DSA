class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int i=0,j=s.size()-1,minimum;
        while(i<j){
            if(s[i]!=s[j]){
                minimum=min(s[i],s[j]);
                s[i]=minimum;
                s[j]=minimum;
            }
            i++;
            j--;
        }
        return s;
    }
};