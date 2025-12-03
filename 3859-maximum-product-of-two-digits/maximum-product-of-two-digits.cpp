class Solution {
public:
    int maxProduct(int n) {
        vector<int>ans;
        while(n>0){
        int x=n%10;
        ans.push_back(x);
        n=n/10;
        }
        sort(ans.begin(),ans.end());
        int max_product;
        for(int i=0;i<ans.size();i++){
            max_product=ans[ans.size()-1]*ans[ans.size()-2];
        }
        return max_product;
    }
};