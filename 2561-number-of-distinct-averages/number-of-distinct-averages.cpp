class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        vector<int>diff;
        if(nums.size()==1 || nums.size()==2){
            return 1;
        }
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1,x;
        while(i<j){
            x=nums[i]+nums[j];
            diff.push_back(x);
            i++;
            j--;
        }
        sort(diff.begin(), diff.end());
        diff.erase(unique(diff.begin(), diff.end()), diff.end());

        return diff.size();
    }
};