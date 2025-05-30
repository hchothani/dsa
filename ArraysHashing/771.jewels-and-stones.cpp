/*
 * @lc app=leetcode id=771 lang=cpp
 *
 * [771] Jewels and Stones
 */

// @lc code=start
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> ht;
        for(auto c : jewels) ht[c]++;
        int res = 0;
        for(auto c : stones){
            if(ht[c]) res++;
        }
        return res;
    }
};
// @lc code=end

