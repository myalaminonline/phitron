// https://leetcode.com/problems/implement-stack-using-queues/description/
// https://leetcode.com/problems/implement-stack-using-queues/submissions/2091766148/

/*
class MyStack {
public:
    queue<int> q1;
    queue<int> q2;
    int v1;
    int v2;

    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        while(!q1.empty()){
            v1=q1.front();
            q1.pop();
            if(!q1.empty()) q2.push(v1);
        }
        while(!q2.empty()){
            v2=q2.front();
            q2.pop();
            q1.push(v2);
        }
        return v1;
    }
    
    int top() {
        // return q.back();
        while(!q1.empty()){
            v1=q1.front();
            q1.pop();
            q2.push(v1);
        }
        while(!q2.empty()){
            v2=q2.front();
            q2.pop();
            q1.push(v2);
        }
        return v1;
    }
    
    bool empty() {
        return q1.empty();
    }
};
*/