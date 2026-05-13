class Solution {
public:
    int minMoves(vector<int>& nums, int limit) {

        vector<int> table(2 * limit + 2, 0);
        int n = nums.size();

        for (int i = 0; i < n / 2; i++) {

            int a = nums[i];
            int b = nums[n - 1 - i];

            int low = min(a, b) + 1;
            int high = max(a, b) + limit;
            int sum = a + b;

            table[2] += 2;

            table[low] -= 1;
            table[high + 1] += 1;

            table[sum] -= 1;
            table[sum + 1] += 1;
        }

        int ans = INT_MAX;
        int moves = 0;

        for (int i = 2; i <= 2 * limit; i++) {
            moves += table[i];
            ans = min(ans, moves);
        }

        return ans;
    }
};