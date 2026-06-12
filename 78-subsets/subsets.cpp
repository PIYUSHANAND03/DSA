class Solution {
public:
    void allsubset(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& answer){
        if(i==nums.size()){
            answer.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        allsubset(nums, ans, i+1, answer);
        ans.pop_back();
        allsubset(nums, ans, i+1, answer);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>answer;
        vector<int>result;
        allsubset(nums, result, 0, answer);

        return answer;
    }
};