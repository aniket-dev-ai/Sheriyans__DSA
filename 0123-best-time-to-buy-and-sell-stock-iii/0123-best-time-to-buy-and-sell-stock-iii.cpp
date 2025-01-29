class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n == 0) return 0;

        // Variables for first transaction
        int firstBuy = INT_MAX, firstProfit = 0;
        // Variables for second transaction
        int secondBuy = INT_MAX, secondProfit = 0;

        for (int i = 0; i < n; i++) {
            // First transaction: calculate max profit up to day i
            firstBuy = min(firstBuy, prices[i]);
            firstProfit = max(firstProfit, prices[i] - firstBuy);

            // Second transaction: calculate max profit from day i to end
            secondBuy = min(secondBuy, prices[i] - firstProfit);
            secondProfit = max(secondProfit, prices[i] - secondBuy);
        }

        return secondProfit;
    }
};
