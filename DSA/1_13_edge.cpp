#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // input
    int n,e; cin>>n>>e;
    vector<pair<int,int>> a;

    // process
    while(e--){
        int x,y; cin>>x>>y;
        a.push_back({x,y});
    }

    // output

        // output using pair
        cout<<"output using pair: "<<endl;
        for(pair<int,int> i:a){
            cout<<i.first<<" "<<i.second<<endl;
        }
        cout<<endl;

        // output using auto
        cout<<"output using auto: "<<endl;
        for(auto i:a){
            cout<<i.first<<" "<<i.second<<endl;
        }

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
