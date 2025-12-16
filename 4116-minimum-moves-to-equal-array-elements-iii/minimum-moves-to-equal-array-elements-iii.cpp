class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        for(int i=0;i<nums.size();i++){
            while(nums[i]<nums[nums.size()-1]){
                nums[i]=nums[i]+1;
                count++;
            }
        }
        return count;
    }
};