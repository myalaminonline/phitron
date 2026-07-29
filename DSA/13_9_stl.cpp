#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // input
    int n; cin>>n;
    stack<int> s;
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
