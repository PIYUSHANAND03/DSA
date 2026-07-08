class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> v;
        sort(nums.begin(),nums.end());
        int temp=-1,count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=temp){
                temp=nums[i];
                count=0;
            }
            if(count>=v.size()){
                v.push_back(vector<int>());
            }
            v[count].push_back(nums[i]);
            count++;
        }
        return v;
    }
};