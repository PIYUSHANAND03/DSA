class Solution {
public:
    int small(int n){
        int r;
        int ans=0;
        while(n>0){
            r=n%10;
            ans=ans+r;
            n=n/10;
        }
        return ans;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(small(nums[i])==i){
                return i;
            }
        }
        return -1;
    }
};