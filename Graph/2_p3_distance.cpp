#include<bits/stdc++.h>
using namespace std;

vector<int> v[1005];

void bfs(int src, int dest){
    
    queue<int> q;
    q.push(src);

    bool visits[1005];
    memset(visits, false, sizeof(visits));
    visits[src] = true;

    int levels[1005];
    memset(levels, -1, sizeof(levels));
    levels[src] = 0;
    
    while(!q.empty()){
        int current = q.front();
        q.pop();

        // cout<<current<<" ";
    
        for(auto node: v[current]){
            if(!visits[node]){
                q.push(node);
                visits[node] = true;
                levels[node] = levels[current]+1;
            }
        }
    }
    
    if(visits[dest]) cout<<levels[dest]<<endl;
    else cout<<"-1"<<endl;
}

int main(){
    
    int n,e; cin>>n>>e;
    while(e--){
        int a,b; cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int q; cin>>q;
    while(q--){
        int src,dest; cin>>src>>dest;
        bfs(src, dest);
    }

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
/*
Question: You will be given an undirected graph as input. Then you will be given a query Q. For each query, you will be given source S and destination D. You need to print the shortest distance between S and D. If there is no path from S to D, print -1.

sample input (1):
6 7
0 1
0 2
1 2
0 3
4 2
3 5
4 3
6
0 5
1 5
2 5
2 3
1 4
0 0

sample output (1):
2
3
3
2
2
0

sample input (2):
7 5
0 1
0 2
4 5
4 6
5 7
3
0 4
5 1
1 3

sample output (2):
-1
-1
-1

*/