/*
 * @lc app=leetcode id=73 lang=cpp
 *
 * [73] Set Matrix Zeroes
 */

// @lc code=start
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
         int m = matrix.size();
        int n = matrix[0].size();
        map<pair<int,int>,int> mp;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0 && mp[{i,j}]!=1){
                    int p = 0,q = 0;
                    while(p>=0 && p<m ){
                        if(matrix[p][j]!=0){
                            matrix[p][j]=0;
                            mp[{p,j}] = 1;
                        }
                        p++;
                    }
                    while(q>=0 && q<n){
                        if(matrix[i][q]!=0){
                            matrix[i][q] = 0;
                            mp[{i,q}] = 1;
                        }
                        q++;
                    }
                }
            }
        }
    }
};
// @lc code=end

