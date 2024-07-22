/*
 * @lc app=leetcode id=287 lang=cpp
 *
 * [287] Find the Duplicate Number
 */

// @lc code=start
class Solution {
public:
    int findDuplicate(vector<int>& nums) {    
        int left = 1;
        int right = nums.size()-1;
        while(left<right){
            int mid = left + (-left+right)/2;
            int cnt = 0;

            for(auto &val: nums){
                if(val<=mid) cnt++;
            }

            if(cnt>mid) right = mid;
            else left = mid+1;
        }
        return left;
    }
};
// @lc code=end

