// Last updated: 7/26/2026, 4:02:07 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit =0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<buy){
                buy = prices[i];
            } else if(prices[i]>buy){
                int pr = prices[i]-buy;
                profit = max(profit,pr);
            }
        }
        return profit;
    }
};