#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // input stack
    int n; cin>>n;
    stack<int> s;
    for(int i=0; i<n; i++){
        int val; cin>>val;
        s.push(val);
    }

    // input queue
    int m; cin>>m;
    queue<int> q;
    for(int i=0; i<m; i++){
        int val; cin>>val;
        q.push(val);
    }

    // process
    bool flag = true;
    while(!s.empty() && !q.empty()){
        if(s.top() != q.front()){
            flag = false;
            break;
        }
        s.pop();
        q.pop();
    }

    // output
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
/*
Question: Take a stack of size N and a queue of size M as input. Then check if both of them are the same or not in the order of removing. You should use STL to solve this problem.

Sample Input
Sample Output
5
10 20 30 40 50
5
10 20 30 40 50
NO
5
10 20 30 40 50
4
10 20 30 40
NO
5
10 20 30 40 50
5
50 40 30 20 10
YES
*/