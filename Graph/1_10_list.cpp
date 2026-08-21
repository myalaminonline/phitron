#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,e; cin>>n>>e;
    vector<int> v[n];
    double myVar = 9.99;
    
    // .name() returns a C-style string representing the type
    cout << "The type is: " << typeid(myVar).name() << '\n';

    while(e--){
        int a,b; cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    for(int i=0; i<n; i++){
        cout<<i<<" -> ";
        for(int j=0; j<v[i].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0; i<n; i++){
        cout<<i<<" -> ";
        for(auto x:v[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
