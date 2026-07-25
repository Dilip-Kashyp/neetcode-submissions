class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minSell = prices[0];
        int maxProfit = 0;
        for (int i = 0; i < prices.size(); i++){
            maxProfit = max(maxProfit, prices[i] - minSell);
            minSell = min(minSell, prices[i]);
        }
        return maxProfit;
    }
};
