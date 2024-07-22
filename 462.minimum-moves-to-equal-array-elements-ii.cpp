/*
 * @lc app=leetcode id=462 lang=cpp
 *
 * [462] Minimum Moves to Equal Array Elements II
 */

// @lc code=start
class Solution {
public:
    int minMoves2(vector<int>& nums) {
          sort(nums.begin(),nums.end());
        int median = nums[nums.size()/2];
        int res=0;
        for(auto &val : nums){
            res+=abs(val-median);
        }
        return res;
    }
};
// @lc code=end

