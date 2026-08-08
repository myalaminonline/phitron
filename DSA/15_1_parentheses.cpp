// https://leetcode.com/problems/valid-parentheses/
// https://leetcode.com/problems/valid-parentheses/submissions/2092423613

/*
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c:s){
            if(c=='(' || c=='{' || c=='[' ){
                st.push(c);
            } else {
                if(!st.empty()){
                    if(c==')' && st.top()=='(') st.pop();
                    else if(c=='}' && st.top()=='{') st.pop();
                    else if(c==']' && st.top()=='[') st.pop();
                    else return false;
                } else return false;
            }
        }
        if(st.empty()) return true;
        else return false;
    }
};
*/