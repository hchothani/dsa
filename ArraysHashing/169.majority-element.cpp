/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        unordered_map<int, int> count;
        for(auto num : nums){
            count[num]++;
            if(count[num] > nums.size()/2) return num;
        }
        return -1;
    }
};
// @lc code=end

