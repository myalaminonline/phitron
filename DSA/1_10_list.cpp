#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // input
    int n,e; cin>>n>>e;
    vector<int> a[n];
    
    // process
    while(e--){
        int x,y; cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }

    // output

        // output using index
        cout<<"output using index: "<<endl;
        for(int i=0; i<n; i++){
            cout<<i<<" -> ";
            for(int j=0; j<a[i].size(); j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;

        // output using auto
        cout<<"output using auto: "<<endl;
        for(int i=0; i<n; i++){
            cout<<i<<" -> ";
            for(auto j:a[i]){
                cout<<j<<" ";
            }
            cout<<endl;
        }
        
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
