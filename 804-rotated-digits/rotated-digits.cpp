class Solution {
public:
    bool good(int n){
        bool valid=false;
        while(n>0){
            int k=n%10;
            if(k==3 || k==4 || k==7){
                return false;
            }
            if(k==2 || k==5  || k==6 || k==9){
                valid=true;
            }
            n=n/10;
        }
        return valid;
    }
    int rotatedDigits(int n) {
        int count=0;
        for(int i=1;i<=n;i++){
            if(good(i)){
                count++;
            }
        }
        return count;
    }
};