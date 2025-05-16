/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> ht;
        for(auto it : nums){
            ht[it]++;
        }
        // This was O(1)
        for(auto it : ht){
            if(it.second > 1) return true;
        }
        return false;
    }
};
// @lc code=end

