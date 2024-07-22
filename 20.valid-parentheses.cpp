/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    unordered_map<char,int> mp = {{'[',-3},{'{',-2},{'(',-1},{']',3},{'}',2},{')',1}};
    bool isValid(string s) {
        stack<char> st;
        for(auto &val: s){
            if(mp[val]<0){
                st.push(val);
            }
            else{
                if(st.empty()) return 0;
                char c = st.top();
                st.pop();
                if(mp[c]+mp[val]) return 0;
            }
        }
        if(st.empty()) return 1;
        else return 0;
    
    }
};
// @lc code=end

