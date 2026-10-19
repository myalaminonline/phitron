#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // input
    int n; cin>>n;
    queue<int> q1;
    for(int i=0; i<n; i++){
        int val; cin>>val;
        q1.push(val);
    }

    // process: copy to stack
    stack<int> s;
    while(!q1.empty()){
        s.push(q1.front());
        q1.pop();
    }

    // process: copy to new queue
    queue<int> q2;
    while(!s.empty()){
        q2.push(s.top());
        s.pop();
    }

    // output
    while(!q2.empty()){
        cout<<q2.front()<<" ";
        q2.pop();
    }
    cout<<endl;
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
/*
Question: Take a queue of size N as input. You need to copy those elements in another queue in reverse order. You might use stack here. You should use STL to solve this problem. After copying in another queue, print the elements of that queue.

Sample Input
Sample Output
5
10 20 30 40 50
50 40 30 20 10
*/