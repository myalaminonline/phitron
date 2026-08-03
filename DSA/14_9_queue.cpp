// https://leetcode.com/problems/implement-queue-using-stacks/description/
// https://leetcode.com/problems/implement-queue-using-stacks/submissions/2091803095/

/*
class MyQueue {
public:

    stack<int> s1;
    stack<int> s2;
    int v1;
    int v2;

    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        while(!s1.empty()){
            v1=s1.top();
            s1.pop();
            if(!s1.empty()) s2.push(v1);
        }
        while(!s2.empty()){
            v2=s2.top();
            s2.pop();
            s1.push(v2);
        }
        return v1;
    }
    
    int peek() {
        while(!s1.empty()){
            v1=s1.top();
            s1.pop();
            s2.push(v1);
        }
        while(!s2.empty()){
            v2=s2.top();
            s2.pop();
            s1.push(v2);
        }
        return v1;
    }
    
    bool empty() {
        return s1.empty();
    }
};
*/

/*
class MyQueue {
public:
    stack<int> s;
    MyQueue() {
        
    }
    void push(int x) {
        s.push(x);
    }
    int pop() {
        int val;
        stack<int> s2;
        while(!s.empty()){
            val=s.top();
            s.pop();
            if(!s.empty()) s2.push(val); 
        }
        while(!s2.empty()){
            s.push(s2.top());
            s2.pop();
        }
        return val;
    }
    int peek() {
       int val;
        stack<int> s2;
        while(!s.empty()){
            val=s.top();
            s.pop();
            s2.push(val); 
        }
        while(!s2.empty()){
            s.push(s2.top());
            s2.pop();
        }
        return val;
    }
    bool empty() {
        return s.empty();
    }
};
*/