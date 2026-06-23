class Solution {
public:
    int minimumLength(string s) {
        sort(s.begin(), s.end());
        int count = 1, ans = 0;
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == s[i + 1]) {
                count++;
            } 
            else {
                if (count % 2 == 0) {
                    ans = ans + 2;
                } 
                else {
                    ans = ans + 1;
                }
                count = 1;
            }
        }
        if (count % 2 == 0) {
            ans = ans + 2;
        } 
        else {
            ans = ans + 1;
        }
        return ans;
    }
};