/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> ht;
        for(auto num : nums)ht[num]++;
        for(auto p : ht){
            if(p.second == 1) return p.first;
        }
        return 0;
    }
};
// @lc code=end

