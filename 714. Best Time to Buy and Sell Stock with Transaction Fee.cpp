class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        if (n <= 1)
            return 0;

        int buying = -prices[0];
        int selling = 0;

        for (int i = 1; i < n; i++) {
            int prev_buying = buying;
            buying = std::max(buying, selling - prices[i]);
            selling = std::max(selling, prev_buying + prices[i] - fee);
        }

        return selling;
    }
};