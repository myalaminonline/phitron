#include<bits/stdc++.h>
using namespace std;

int main(){

    // input
    int n,e; cin>>n>>e;
    int a[n][n];

        // initial input
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<n; j++){
        //         a[i][j]=0;
        //     }
        // }
        memset(a,0,sizeof(a));

        // initial input status
        cout<<"initial input status: "<<endl;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;

        // same input
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j) a[i][j]=1;
            }
        }

        // same input status
        cout<<"same input status: "<<endl;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;

    // process
    for(int i=0; i<e; i++){
        int x,y; cin>>x>>y;
        a[x][y]=1; // if undirected + directed
        a[y][x]=1; // if undirected
    }

    // output

        // output using index
        cout<<"output using index: "<<endl;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;

        // output using auto
        cout<<"output using auto: "<<endl;
        for(int i=0; i<n; i++){
            for(auto j:a[i]){
                cout<<j<<" ";
            }
            cout<<endl;
        }
        cout<<endl;

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
