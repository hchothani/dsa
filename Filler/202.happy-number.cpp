/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */

// @lc code=start
class Solution {
public:
    bool isHappy(int n) {
        while (n > 9){
            int sum = 0;
            int copy = n;
            while(copy != 0){
                int digit = copy % 10;
                sum += digit*digit;
                copy = copy / 10;
            }
            n = sum;
        }   
        if(n == 1 || n == 7) return true;
        return false;   
    }
};
// @lc code=end

