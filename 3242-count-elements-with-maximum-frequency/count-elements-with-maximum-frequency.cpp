class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int count=1, sum=INT_MIN, max_freq=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                count++;
            }
            else{
                if(count>max_freq){
                    max_freq=count;
                    sum=count;
                }
                else if(count==max_freq){
                    sum=sum+count;
                }
                count=1;
            }
        }
        if(count>max_freq){
            max_freq=count;
            sum=count;
        }
        else if(count==max_freq){
            sum=sum+max_freq;
        }
        return sum;
    }
};