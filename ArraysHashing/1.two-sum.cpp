/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> ht;
        vector<int> ans;
        for(auto it : nums) ht[it]++;
        for(int i = 0; i < nums.size(); i++){
            int val = target - nums[i];
            ht[nums[i]]--;
            if(ht[val] > 0){
                ans.push_back(i);
                auto it = find(nums.begin() + i + 1, nums.end(), val);
                ans.push_back(distance(nums.begin(), it));
                return ans;
            }
        }
        return ans;
    }
};
// @lc code=end

