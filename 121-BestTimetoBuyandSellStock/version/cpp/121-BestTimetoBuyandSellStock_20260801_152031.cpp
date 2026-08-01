// Last updated: 8/1/2026, 3:20:31 PM
// keep lowest price , substract to find max profit
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int mini = INT_MAX;
5        int profit = 0;
6        for(int i=0;i<prices.size();i++){
7            if(mini>prices[i]){
8                mini = prices[i];
9            } else{
10                profit = max(profit,prices[i]-mini);
11            }
12        }
13        return profit;
14    }
15};