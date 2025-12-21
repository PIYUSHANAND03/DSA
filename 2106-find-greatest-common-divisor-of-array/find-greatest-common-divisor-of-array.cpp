class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int min_value=nums[0];
        int max_value=nums[nums.size()-1];
        for(int i=1;i<=min_value;i++){
            if(min_value%i==0 && max_value%i==0){
                ans.push_back(i);
            }
        }
        return ans[ans.size()-1];
    }
};