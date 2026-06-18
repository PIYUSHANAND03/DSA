class Solution {
public:
    string baseNeg2(int n) {
        if (n==0){
            return "0";
        }
        int rem=0;
        string ans="";
        while(n!=0){
            rem=n%(-2);
            n=n/(-2);
            if(rem<0){
                rem+=2;
                n+=1;
            }
            ans=char(rem + '0') + ans;

        }
        return ans;
    }
};