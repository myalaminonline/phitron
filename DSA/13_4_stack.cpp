#include <bits/stdc++.h>
using namespace std;

class Stack{

    public:
        vector<int> v;

        void push(int val){
            v.push_back(val);
        }

        void pop(){
            v.pop_back();
        }

        int top(){
            return v.back();
        }

        int size(){
            return v.size();
        }

        bool empty(){
            return v.empty();
        }
};

int main(){

    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    cout << "s.top() -> " << s.top() << endl;

    s.pop();
    cout << "s.top() -> " << s.top() << endl;

    s.pop();
    cout << "s.top() -> " << s.top() << endl;

    if (!s.empty()) s.pop();
    if (!s.empty()) s.top();
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
