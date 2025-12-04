class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int sum;
        for(int i=0;i<prices.size();i++){
            sum=prices[0]+prices[1];
        }
        if(sum<=money){
            return money-sum;
        }
        else{
            return money;
        } 
    }
};