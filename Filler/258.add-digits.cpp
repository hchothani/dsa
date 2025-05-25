/*
 * @lc app=leetcode id=258 lang=cpp
 *
 * [258] Add Digits
 */

// @lc code=start
class Solution {
public:
    int addDigits(int num) {
        if(num==0) return 0;
        if (num%9==0) return 9;
        int ans = num - 9*(num/9);
        return ans;

    }
};
// @lc code=end

