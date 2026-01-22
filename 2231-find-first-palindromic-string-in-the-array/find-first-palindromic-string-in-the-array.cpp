class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            int j=0;
            int k=words[i].size()-1;
            bool is_palindrome=true;

            while(j<k){
                if(words[i][j]!=words[i][k]){
                    is_palindrome=false;
                    break;
                }
                j++;
                k--;
            }
            if(is_palindrome){
                return words[i];
            }
        }
        return "";
    }
};