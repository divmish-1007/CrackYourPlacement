class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = 0;
        for(int i=0; i<n-1; i++){
            int cost = prices[i+1] - prices[i];
            if(cost>0){
                maxProfit += cost;
            }
        }
        return maxProfit;
    }
};