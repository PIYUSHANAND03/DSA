class Solution {
public:
    vector<int> maxValue(vector<int>& nums) {
        int n = nums.size();
        vector<int> pge(n), nse(n), res(n);
        pge[0] = nums[0];
        nse[n - 1] = nums[n - 1];

        for (int i = 1; i < n; i++) {
            pge[i] = max(pge[i - 1], nums[i]);
        }

        for (int i = n - 2; i >= 0; i--) {
            nse[i] = min(nse[i + 1], nums[i]);
        }

        res[n - 1] = pge[n - 1]; 
        for (int i = n - 2; i >= 0; i--) {
            res[i] = pge[i];
            if (pge[i] > nse[i + 1]) {
                res[i] = res[i + 1];
            }
        }

        return res;
    }
};