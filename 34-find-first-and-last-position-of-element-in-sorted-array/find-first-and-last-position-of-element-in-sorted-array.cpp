class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int start=0;
        int end=0;
        if(nums.size()==0){
            start=-1;
            end=-1;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                start=i;
                break;
            }
            else{
                start=-1;
            }
        }
        for(int j=nums.size()-1;j>=0;j--){
            if(nums[j]==target){
                end=j;
                break;
            }
            else{
                end=-1;
            }
        }
        ans.push_back(start);
        ans.push_back(end);
        return ans;
    }
};