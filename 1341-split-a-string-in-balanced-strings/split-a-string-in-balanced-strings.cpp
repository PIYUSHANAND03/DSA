class Solution {
public:
    int balancedStringSplit(string s) {
        int countr=0,countl=0,count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='R'){
                countr++;
            }
            else{
                countl++;
            }
            if(countr==countl){
                count++;
                countr=0;
                countl=0;
            }
        }
        return count;
    }
};