// https://leetcode.com/problems/min-stack/description/
// https://leetcode.com/problems/min-stack/submissions/2092984831/

/*
class MinStack {
public:
    stack<int> st, mst;
    MinStack() {
        
    }
    void push(int val) {
        st.push(val);
        if(mst.empty()) mst.push(val);
        else if(val<=mst.top()) mst.push(val);
    }
    
    void pop() {
        if(st.top()==mst.top()) mst.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mst.top();
    }
};
*/