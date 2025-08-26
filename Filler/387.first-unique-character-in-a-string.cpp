/*
 * @lc app=leetcode id=387 lang=cpp
 *
 * [387] First Unique Character in a String
 */

// @lc code=start
class Solution
{
public:
    int firstUniqChar(string s)
    {
        unordered_map<char, int> ht;
        for (auto c : s)
        {
            ht[c]++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (ht[s[i]] == 1)
                return i;
        }
        return -1;
    }
};
// @lc code=end
