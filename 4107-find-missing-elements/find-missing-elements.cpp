class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int smallest=nums[0];
        int greatest=nums[nums.size()-1];

        for(int i=1;i<nums.size();i++){
            while(nums[i]!=smallest+1){
                ans.push_back(smallest+1);
                smallest++;
            }
            smallest=nums[i];
        }
        return ans;
    }
};