class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]<10){
                if(nums[i]==i){
                    return nums[i];
                }
            }
            else{
                int sum=0;
                while(nums[i]!=0){
                    int n=nums[i]%10;
                    sum=sum+n;
                    nums[i]=nums[i]/10;
                }
                if(sum==i){
                    return sum;
                }
            }
        }
        return -1;
    }
};