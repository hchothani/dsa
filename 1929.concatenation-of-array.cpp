/*
 * @lc app=leetcode id=1929 lang=cpp
 *
 * [1929] Concatenation of Array
 */

// @lc code=start
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        for(auto it : nums){
            ans.push_back(it);
        }
        for(auto it: nums){
            ans.push_back(it);
        }
        return ans;
    }
};
// @lc code=end

