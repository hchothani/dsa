/*
 * @lc app=leetcode id=709 lang=cpp
 *
 * [709] To Lower Case
 */

// @lc code=start
class Solution {
public:
    string toLowerCase(string s) {
       string ans;
       for(char c : s){
        ans.push_back(tolower(c));
       } 
       return ans;
    }
};
// @lc code=end

