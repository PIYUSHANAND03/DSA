class Solution {
public:
   
   long long int root(int n){
        int start=0;
        int end=n;
        long long int mid=(start+end)/2;
        int ans=0;
      
       while(start<=end){

       if(mid*mid==n)
            return mid;
       
       if(mid*mid>n){
            end=mid-1;
        }
        else{
            ans=mid;
            start=mid+1;
        }
        mid=(start+end)/2;
       }
        return ans;
   }
   
   int mySqrt(int x) {
        return root(x);
   }
};