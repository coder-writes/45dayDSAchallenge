/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
          string s ="";
        sort(strs.begin(),strs.end());
        int n = strs.size();
        string first = strs[0],last = strs[n-1];

        for(int i=0;i<min(first.size(),last.size());i++)
        {
            if(first[i]!=last[i])
            return s;
            else
            s+=first[i];
        }
        return s;
    }
};
// @lc code=end

