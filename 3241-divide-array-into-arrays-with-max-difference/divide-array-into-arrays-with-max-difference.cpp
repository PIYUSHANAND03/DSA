class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());

        vector<vector<int>>ans;

        for(int i=0;i<n;i++){
            vector<int>temp;
            for(int j=0;j<3;j++){
                temp.push_back(nums[i+j]);
            }
            if(temp[2]-temp[0] >k ) return{};
            ans.push_back(temp);
            i+=2;
        }
        return ans;
    }
};