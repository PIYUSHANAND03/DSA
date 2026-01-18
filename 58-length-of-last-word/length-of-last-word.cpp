class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0, size=s.size()-1;
        while(size>=0 && s[size]==' '){
            size--;
        }
        while(size>=0 && s[size]!=' '){
            count++;
            size--;
        }
        return count;
    }
};