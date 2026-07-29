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
