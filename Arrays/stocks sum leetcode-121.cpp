class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minPrice = INT_MAX; // lowest buying price
        int maxProfit = 0;      // best profit

        for (int price : prices) {

            // update minimum price
            minPrice = min(minPrice, price);

            // calculate profit if sold today
            int profit = price - minPrice;

            // update maximum profit
            maxProfit = max(maxProfit, profit);
        }

        return maxProfit;
    }
};
