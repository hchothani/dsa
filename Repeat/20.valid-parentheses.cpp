/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        unordered_map<char, char> mp = {{')', '('}, {'}', '{'}, {']', '['}};
        bool flag = true;
        for (auto c : s)
        {
            if (c == ')' || c == '}' || c == ']')
            {
                if (st.size() == 0)
                    return false;
                if (st.top() != mp[c])
                {
                    return false;
                }
                st.pop();
                continue;
            }
            st.push(c);
        }
        if (st.size())
            return false;
        return true;
    }
};
// @lc code=end
