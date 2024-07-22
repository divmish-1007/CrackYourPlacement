class Solution {
public:
    int maxProfit(vector<int>& prices) {
                int n = prices.size();
        int minimal  = prices[0];
        int profit = 0;
        
        for(int i=1; i<n; i++){
            int cost = prices[i] - minimal;
            profit = max(profit, cost);
            minimal = min(minimal, prices[i]);
        }
    return profit;
    }
};