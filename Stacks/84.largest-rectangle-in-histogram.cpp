/*
 * @lc app=leetcode id=84 lang=cpp
 *
 * [84] Largest Rectangle in Histogram
 */

// @lc code=start
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st; // index
        int n = heights.size();
        int maxArea = 0;
        for(int i = 0; i <= n; i++){
            while(!st.empty() && (i==n || heights[st.top()] >= heights[i])){
                int h = heights[st.top()];
                st.pop();
                int w;
                if(st.empty()) w = i;
                else w = i - st.top() - 1;
                maxArea = max(maxArea, h*w);
            }
            st.push(i);
        }
        return maxArea;
    }
};
// @lc code=end

