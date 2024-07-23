/*
 * @lc app=leetcode id=122 lang=cpp
 *
 * [122] Best Time to Buy and Sell Stock II
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int start = prices[0];
        int max = 0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]>start){
                max += prices[i] - start ;
            }
            start = prices[i];
        }
        return max;
    }
};
// @lc code=end

