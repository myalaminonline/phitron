#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // input
    int n; cin>>n;
    queue<int> q;
    for (int i=0; i<n; i++){
        int val; cin>>val;
        q.push(val);
    }

    // output
    while (!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
