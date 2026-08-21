#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,e; cin>>n>>e;
    int m[n][n];


    // initial condition
    cout<<"initial condition: "<<endl;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         m[i][j]=0;
    //     }
    // }
    memset(m,0,sizeof(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;


    // same condition
    cout<<"same condition: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j) m[i][j]=1;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;


    // input condition
    cout<<"input condition: "<<endl;
    for(int i=0; i<e; i++){
        int a,b; cin>>a>>b;
        m[a][b]=1; // if undirected + directed
        m[b][a]=1; // if undirected
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
