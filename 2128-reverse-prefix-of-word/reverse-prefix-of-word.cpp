class Solution {
public:
    string reversePrefix(string word, char ch) {
        int find_ch=0;
        for(int i=0;i<word.size();i++){
            if(word[i]==ch){
                find_ch=i;
                break;
            }
        }
        if(find_ch==0){
            return word;
        }
        
        int j=0,k=find_ch;
        while(j<k){
            swap(word[j],word[k]);
            j++;
            k--;
        }
        return word;
    }
};