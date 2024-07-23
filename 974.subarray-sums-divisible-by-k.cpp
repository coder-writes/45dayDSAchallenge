/*
 * @lc app=leetcode id=974 lang=cpp
 *
 * [974] Subarray Sums Divisible by K
 */

// @lc code=start
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int cnt = 0;
        int prefixSum = 0;
        unordered_map<int, int> prefixMap;
        prefixMap[0] = 1; 

        for (int num : nums) {
            prefixSum += num;
            int mod = prefixSum % k;
            if (mod < 0) {
                mod += k;
            }
            if (prefixMap.find(mod) != prefixMap.end()) {
                cnt += prefixMap[mod];
                prefixMap[mod] += 1;
            } else {
                prefixMap[mod] = 1;
            }
        }
        
        return cnt; 
    }
};
// @lc code=end

