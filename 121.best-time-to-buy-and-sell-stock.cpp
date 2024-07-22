/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int maxProfit = 0;
        int buy = prices[0],sell = prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]<buy){
                buy  = prices[i];
                sell = prices[i];
            }
            if(prices[i]>=sell){
                sell = prices[i];
            }
                maxProfit = max(maxProfit,sell-buy);
        }
        return maxProfit;
    }
};
// @lc code=end

