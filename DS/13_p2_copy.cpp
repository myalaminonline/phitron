/*
Question: Take a stack of size N as input and copy those elements to another stack to get the values in the order they were inserted and print them. You should use STL to solve this problem.


Sample Input
Sample Output
5
10 20 30 40 50
10 20 30 40 50
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // input
    int n; cin>>n;
    stack<int> s1;
    for(int i=0; i<n; i++){
        int val; cin>>val;
        s1.push(val);
    }

    // process
    stack<int> s2;
    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }

    // output
    while(!s2.empty()){
        cout<<s2.top()<<" ";
        s2.pop();
    }
    cout<<endl;
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
