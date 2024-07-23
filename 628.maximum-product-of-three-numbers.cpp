/*
 * @lc app=leetcode id=628 lang=cpp
 *
 * [628] Maximum Product of Three Numbers
 */

// @lc code=start
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
           sort(nums.rbegin(),nums.rend());
        int res = nums[0];
        
        int pos1 = nums[1]*nums[2];
        if(res<0) return res*pos1;
        int pos2 = nums[nums.size()-1]*nums[nums.size()-2];
        if(pos1>pos2) return res*pos1;
        else return res*pos2;
        
    }
};
// @lc code=end

