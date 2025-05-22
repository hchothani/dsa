/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
       stack<int> st;
       unordered_map<char, char> ht = {
        {'(' , ')'},
        {'[' , ']'},
        {'{' , '}'}
       };
       for(auto ch : s){
        if(ch != ')' && ch != ']' && ch != '}'){
            st.push(ch);
        }
        else{
            if(st.empty()) return false;
            if(ht[st.top()] == ch){
                st.pop();
            }
            else return false; 
        }
       } 
       if(st.empty()) return true;
       else return false;
    }
};
// @lc code=end

