#include <bits/stdc++.h>
using namespace std;

class Stack{

    public:
        list<int> l;

        void push(int val){
            l.push_back(val);
        }

        void pop(){
            l.pop_back();
        }

        int top(){
            return l.back();
        }

        int size(){
            return l.size();
        }

        bool empty(){
            return l.empty();
        }
};

int main(){

    // input
    int n; cin>>n;
    Stack s;
    for(int i=0; i<n; i++){
        int val; cin>>val;
        s.push(val);
    }

    // output
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
