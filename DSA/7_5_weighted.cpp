#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, e; cin>>n>>e;
    vector<pair<int, int>> adj[n];
    while(e--){
        int a, b, c; cin>>a>>b>>c;
        adj[a].push_back({b,c});
        adj[b].push_back({b,c});
    }
    for(int i=0; i<n; i++){
        cout<<i<<" -> ";
        for(auto p : adj[i]){
            cout<<p.first<<" "<<p.second<<", ";
        }
        cout<<endl;
    }
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
/*
Sample Input:
5 8
0 1 10
1 2 1
0 2 7
0 3 4
2 3 1
3 4 5 
1 4 3
2 4 5

Sample Output:
0 -> 1 10, 2 7, 3 4, 
1 -> 1 10, 2 1, 4 3, 
2 -> 2 1, 2 7, 3 1, 4 5, 
3 -> 3 4, 3 1, 4 5, 
4 -> 4 5, 4 3, 4 5, 

*/