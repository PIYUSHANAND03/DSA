class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1){
            return s;
        }
        string ans="";
        int jump=(numRows-1)*2;
        for(int i=0;i<numRows;i++){
            for(int j=i;j<s.size();j=j+jump){
                ans=ans+s[j];
                if(i>0 && i<numRows-1 && (j+jump-2*i)<s.size()){
                    ans=ans+s[j+jump-2*i];
                }
            }
        }
        return ans;
    }
};