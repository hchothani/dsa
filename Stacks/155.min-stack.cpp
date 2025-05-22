/*
 * @lc app=leetcode id=155 lang=cpp
 *
 * [155] Min Stack
 */

// @lc code=start
class MinStack {
public:
    MinStack() { 
    }
    
    void push(int val) {
       st.push_back(val); 
       if(minST.empty() || val <= minST.back()) minST.push_back(val);
    }
    
    void pop() {
        if(st.back() == minST.back()) minST.pop_back();
       st.pop_back();
    }
    
    int top() {
       return st.back(); 
    }
    
    int getMin() {
       return minST.back();
    }
private:
    vector<int> st;
    vector<int> minST;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end

