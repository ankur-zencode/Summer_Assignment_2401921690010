*leetcode 121  Best Time to Buy and Sell Stock*                                                                                                                                                                                               class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minCost = INT_MAX;
        int maxProfit = 0;

        for (int cost : prices) {
            if (cost < minCost) {
                minCost = cost;  // buy at lowest price
            } else {
                maxProfit = max(maxProfit, cost - minCost);
            }
        }

        return maxProfit;
    }
};                                                                                                                                                                                                                                     description-                                                                                                                                                                                                                 This code determines the highest profit you can achieve from a single stock purchase and sale.
It keeps track of the minimum price (minCost) seen so far (best day to buy).
For each price, it calculates possible profit = current price − minCost.
It updates the maximum profit (maxProfit) whenever a better profit is found.
Lastly, the maximum profit is returned.