class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int sum=0;
        int F=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            F=F+(i*nums[i]);
        }
        int result=F;
        for(int j=0;j<=nums.size()-1;j++){
            int newF=F+sum-nums.size()*nums[nums.size()-1-j];
            result=max(result, newF);
            F=newF;
        }
        return result;
    }
};