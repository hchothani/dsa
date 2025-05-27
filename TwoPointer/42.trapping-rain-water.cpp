/*
 * @lc app=leetcode id=42 lang=cpp
 *
 * [42] Trapping Rain Water
 */

// @lc code=start
class Solution {
public:
    int trap(vector<int>& height) {
        int level = 0;
        int water = 0;
        int l = 0;
        int r = height.size()-1;
        while(l < r){
            int lower = 0;
            if(height[l] < height[r]){
                lower = height[l];
                l++;
            }
            else{
                lower = height[r];
                r--;
            }
            level = max(level, lower);
            water += level - lower;
        }
        return water;
    }
};
// @lc code=end

