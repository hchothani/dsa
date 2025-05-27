/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input Array Is Sorted
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int l = 0;
        int r = n-1;
        while(l < r){
            if(numbers[r] + numbers[l] == target) return {l+1, r+1};
            else if(numbers[r] + numbers[l] > target){
                r--;
            }
            else l++;
        }
        return {l+1, r+1};
    }
};
// @lc code=end

