class Solution {
public:
    int findNumbers(vector<int>& nums) {
      int count=0;
      for(int i=0;i<nums.size();i++){
        int ans=0;
        while(nums[i]>0){
            nums[i]=nums[i]/10;
            ans++;
        }
        if(ans%2==0){
            count++;
        }
      }
      return count; 
    }
};