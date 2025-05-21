/*
 * @lc app=leetcode id=150 lang=cpp
 *
 * [150] Evaluate Reverse Polish Notation
 */

// @lc code=start
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        unordered_set<string> hs {
            "+" , "-", "*", "/"
        };
        for(auto ch : tokens){
            if(!hs.count(ch)){
                st.push(stoi(ch));
            }
            else{
                int x, y;
                switch(ch[0]){
                    case '+':
                        x = st.top();
                        st.pop();
                        y = st.top();
                        st.pop();
                        st.push(x+y);
                        break;
                    case '-': 
                        x = st.top();
                        st.pop();
                        y = st.top();
                        st.pop();
                        st.push(y-x);
                        break;
                    case '/':
                        x = st.top();
                        st.pop();
                        y = st.top();
                        st.pop();
                        st.push(y/x);
                        break;
                    case '*':
                        x = st.top();
                        st.pop();
                        y = st.top();
                        st.pop();
                        st.push(y*x);
                        break;
                }
            }
            cout << st.top() << " ";
        }
        return st.top();
    }
};
// @lc code=end

