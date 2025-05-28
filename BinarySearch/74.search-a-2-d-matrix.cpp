/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 */

// @lc code=start
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n =  matrix[0].size();
        int l = 0, r = m*n - 1;
        while(l<=r){
            int mid = l + (r-l)/2;
            int mrow = mid/n, mcol = mid%n;
            if(matrix[mrow][mcol] == target) return true;
            if(matrix[mrow][mcol] < target) l = mid + 1;
            else r = mid - 1;

        }
        return false;
        
    }
};
// @lc code=end

