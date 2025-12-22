class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        int sum = 0;

        for(int i = 0; i < nums.size(); i++){
            int count = 0;
            for(int j = 0; j < nums.size(); j++){
                if(nums[i] == nums[j]){
                    count++;
                }
            }
            if(count % k == 0){
                sum += nums[i];
            }
        }
        return sum;
    }
};
