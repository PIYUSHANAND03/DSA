class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int ans1, ans2=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                ans1=abs(i-start);
                ans2=min(ans2,ans1);
            }
        }
        return ans2;
    }
};