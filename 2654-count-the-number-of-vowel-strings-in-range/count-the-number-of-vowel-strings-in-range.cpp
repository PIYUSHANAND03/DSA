class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;
        for(int i=left;i<=right;i++){
            int start=words[i][0];
            int end=words[i][words[i].size()-1];
            if((start=='a'||start=='e'||start=='i'||start=='o'||start=='u') && (end=='a'||end=='e'||end=='i'||end=='o'||end=='u')){
                count++;
            }
        }
        return count;
    }
};