/*
 * @lc app=leetcode id=287 lang=cpp
 *
 * [287] Find the Duplicate Number
 */

// @lc code=start
class Solution {
public:
    int findDuplicate(vector<int>& nums) {    
        map<int,int> mp;
        for(auto &val: nums){
            mp[val]++;
        }
        for(auto &val: mp){
            if(val.second>=2){
                return val.first;
            }
        }
    return 1;
    }
};
// @lc code=end

