class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            stack<int>num;
            while(nums[i]>0){
                num.push(nums[i]%10);
                nums[i]=nums[i]/10;
            }
            while(!num.empty()){
                ans.push_back(num.top());
                num.pop();
            }
        }
        return ans;
    }
};