class Solution {
public:
    bool halvesAreAlike(string s) {
        int count1=0,count2=0;
        for(int i=0;i<s.size()/2;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                count1++;
            }
        }
        for(int j=s.size()/2;j<s.size();j++){
           if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' || s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U'){
                count2++;
            } 
        }
        if(count1==count2){
            return true;
        }
        else{
            return false;
        }
    }
};