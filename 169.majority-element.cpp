/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
         unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int frequency = 0,ans =0;
        for(auto v: mp)
        {
            if(v.second>frequency)
            {
                ans = v.first;
                frequency = max(frequency,v.second);
            }
        }
        return ans;
    }
};
// @lc code=end

