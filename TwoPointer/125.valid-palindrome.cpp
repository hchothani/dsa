/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        string pali = "";
        for(auto c : s){
            if(isalpha(c) || isdigit(c)) pali.push_back(tolower(c));
        }
        int r = pali.size() - 1;
        int l = 0;
        cout << pali;
        while(l < r){
            if(pali[r] != pali[l]) return false;
            r--;
            l++;
        }
        return true;
    }

};
// @lc code=end

