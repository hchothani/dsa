/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int>hss;
        unordered_map<char, int>hst;
        int n;
        if(s.size() != t.size()) return false;
        else n = s.size();
        for(int i = 0; i < n; i++){
            hss[s[i]]++;
            hst[t[i]]++;
        }
        return (hss == hst);
    }
};
// @lc code=end

