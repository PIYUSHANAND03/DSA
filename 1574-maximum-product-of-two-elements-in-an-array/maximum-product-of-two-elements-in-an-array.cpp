class Solution {
public:
    int maxProduct(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int n=nums.size();
       int mul=0;
       mul=(nums[n-1]-1)*(nums[n-2]-1);
       return mul;
    }
};