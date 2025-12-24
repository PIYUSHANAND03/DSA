class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mul1, mul2, n=nums.size();
        mul1=nums[n-1]*nums[n-2]*nums[n-3];
        mul2=nums[0]*nums[1]*nums[n-1];
        return max(mul1,mul2);
    }
};