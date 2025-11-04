class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i=i+2){
            if(nums.size()%2==0 && nums[i]!=nums[i+1]){
                return false;
            }
        }
        return true;
    }
};