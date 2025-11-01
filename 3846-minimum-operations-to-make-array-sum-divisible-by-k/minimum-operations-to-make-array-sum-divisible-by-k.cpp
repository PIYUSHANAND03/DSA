class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum=0, count=0;
        for(int i=0;i<nums.size();i++){
           sum=sum+nums[i];
        }
        count=sum%k;
        return count;
    }
};