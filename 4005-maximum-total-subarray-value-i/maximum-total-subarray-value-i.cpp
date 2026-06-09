class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
            long long sub=nums[nums.size()-1]-nums[0];
            long long ans=sub*k;
            return ans;
    }
};