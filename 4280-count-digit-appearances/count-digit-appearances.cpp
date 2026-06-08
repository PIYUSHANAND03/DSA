class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            while(nums[i]>0){
                int ans=nums[i]%10;
                nums[i]=nums[i]/10;
                if(ans==digit){
                count++;
                }
            }
        }
        return count;
    }
};