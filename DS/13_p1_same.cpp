/*
Question: Take two stacks of size N and M as input and check if both of them are the same or not. Don’t use STL stack to solve this problem.

Sample Input
Sample Output
5
10 20 30 40 50
5
10 20 30 40 50
YES
5
10 20 30 40 50
4
10 20 30 40
NO
5
10 20 30 40 50
5
50 40 30 20 10
NO
*/

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
    Stack s1, s2;

    int n; cin>>n;
    for(int i=0; i<n; i++){
        int val; cin>>val;
        s1.push(val);
    }

    int m; cin>>m;
    for(int i=0; i<m; i++){
        int val; cin>>val;
        s2.push(val);
    }

    // process
    bool flag = true;
    while(!s1.empty() && !s2.empty()){
        if(s1.top() != s2.top()){
            flag = false;
            break;
        }
        s1.pop();
        s2.pop();
    }

    // output
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
