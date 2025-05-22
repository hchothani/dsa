/*
 * @lc app=leetcode id=739 lang=cpp
 *
 * [739] Daily Temperatures
 */

// @lc code=start
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
       stack<pair<int, int>> st;
       vector<int> ans(temperatures.size(), 0);
       for(int i = 0; i < temperatures.size(); i++){
        int t = temperatures[i];
        while(!st.empty() && t > st.top().firsfirstt){
            auto p = st.top();
            st.pop();
            ans[p.second] = i - p.second;
        }
        st.push({t, i});
       }
       
       return ans;

    }
};
// @lc code=end

