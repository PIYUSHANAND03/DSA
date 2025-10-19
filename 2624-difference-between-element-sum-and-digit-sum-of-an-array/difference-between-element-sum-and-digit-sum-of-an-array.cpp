class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum1=0, sum2=0;
        for(int i=0;i<nums.size();i++){
            sum1=sum1+nums[i];

            while(nums[i]>0){
            sum2=sum2+nums[i]%10;
            nums[i]=nums[i]/10;
            }
        }
        return sum1-sum2;
    }
};