#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> adj[105];
int dis[105];

void dijkstra(int src){
    queue<pair<int, int>> q;
    q.push({src, 0});
    dis[src] = 0;
    
    while(!q.empty()){
        pair<int, int> p = q.front();
        int pn = p.first;
        int pd = p.second;
        q.pop();

        for(auto c : adj[pn]){
            int cn = c.first;
            int cd = c.second;
            if(pd+cd < dis[cn]){
                dis[cn] = pd+cd;
                q.push({cn, dis[cn]});
            }
        }
    } 
}

int main(){
    int n, e; cin>>n>>e;
    while(e--){
        int a, b, c; cin>>a>>b>>c;
        adj[a].push_back({b,c});
        adj[b].push_back({a,c});
    }
    // memset(dis, INT_MAX, sizeof(dis));
    for(int i=0; i<n; i++){
        dis[i] = INT_MAX;
    }
    dijkstra(0);
    for(int i=0; i<n; i++){
        cout<<i<<" -> "<<dis[i]<<endl;
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
0 -> 0
1 -> 6
2 -> 5
3 -> 4
4 -> 9

*/