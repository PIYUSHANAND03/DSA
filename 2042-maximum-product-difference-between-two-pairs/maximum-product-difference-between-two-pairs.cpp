class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int w=nums[n-1], x=nums[n-2], y=nums[0], z=nums[1];
        int maximum=0;
        maximum=(w*x)-(y*z);
        return maximum;
    }
};