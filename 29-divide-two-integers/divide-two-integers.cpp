class Solution {
public:
    int divide(int dividend, int divisor) {
        long long a=dividend;
        long long b=divisor;
        if((a/b)>2147483647){
            return 2147483647;
        }
        if((a/b)<-2147483648){
            return -2147483648;
        }
        else{
            return a/b;
        }
    }
};