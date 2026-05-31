class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int>ans;
        for(int n: nums){
            int s=0;
            while(n!=0){
                s+=n%10;
                n/=10;
            }
            ans.push_back(s);
        }
        sort(ans.begin(),ans.end());
        return ans[0];
    }
};