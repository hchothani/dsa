/*
 * @lc app=leetcode id=36 lang=cpp
 *
 * [36] Valid Sudoku
 */

// @lc code=start
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows = 9;
        int cols = 9;
        bool isVal = true;
        unordered_map<int, unordered_set<char>> hmcol;
        // col -> set
        unordered_map<int, unordered_set<char>> hmrow;
        // row -> set
        unordered_map<int, unordered_set<char>> hmbox;
        // box -> set
        int box;
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                box = (i/3)*3 + (j/3);
                char  ch = board[i][j];
                if(ch == '.') continue;
                if(hmrow[i].count(ch) || hmcol[j].count(ch) || hmbox[box].count(ch)){
                    isVal = false;
                    return isVal;
                }
                else{
                    hmrow[i].insert(ch);
                    hmcol[j].insert(ch);
                    hmbox[box].insert(ch);
                }
            }
        }
        return isVal;
};
};
// @lc code=end

