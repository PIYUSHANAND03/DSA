class Solution {
public:
    string removeTrailingZeros(string num) {
       string ans="";
       if(num[num.size()-1]!='0'){
            return num;
       }
       for(int i=num.size()-1;i>=0;i--){
            if(num[i]=='0'){
                num[i]='z';
            }
            else{
                break;
            }
       }
       for(int i=0;i<num.size();i++){
            if(num[i]!='z'){
                ans.push_back(num[i]);
            }     
       }
       return ans;
    }
};