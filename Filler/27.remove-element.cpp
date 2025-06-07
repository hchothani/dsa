/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i] == val){
                nums[i] = nums[n-1];
                i--;
                n--;
            } 
            else{
                count++;
            }
        }
        return count;
    }
};
// @lc code=end

