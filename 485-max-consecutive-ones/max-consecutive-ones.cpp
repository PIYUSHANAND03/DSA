class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int>ans;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                ans.push_back(count);
            }
            else{
                count=0;
            }
        }
        if(ans.empty())
        return 0;
        return *max_element(ans.begin(),ans.end());
    }
};