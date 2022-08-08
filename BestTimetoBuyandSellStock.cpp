class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0; //initialize max profit as 0
        int minprice = INT_MAX; //initialize min price
        
        for(int i = 0; i < prices.size(); i++){ // loop through prices
            minprice = min(minprice, prices[i]); // compare current min price and next price from the prices and set minprice whichever value is smaller
            profit = max(profit, prices[i] - minprice); // compare current profit and prices[i] - minprice and set profit whichever is larger
        }
        return profit;
    }
};