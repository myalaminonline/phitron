#include<bits/stdc++.h>
using namespace std;

vector<int> a[1005];

void bfs(int src, int dest) {
    
    queue<int> q;
    q.push(src);

    bool visited[1005];
    memset(visited, false, sizeof(visited));
    visited[src] = true;

    int level[1005];
    memset(level, -1, sizeof(level));
    level[src] = 0;

    int parent[1005];
    memset(parent, -1, sizeof(parent));
    parent[src] = -1;

    while(!q.empty()){
        int current = q.front();
        q.pop();

        // cout<<current<<" ";

        for(auto i: a[current]){
            if(!visited[i]){
                q.push(i);
                visited[i] = true;
                level[i] = level[current]+1;
                parent[i] = current;
            }
        }
    }

    if(visited[dest]){
        cout<<level[dest]<<endl;

        vector<int> path;
        int current = dest;
        while(current != -1){
            path.push_back(current);
            current = parent[current];
        }
        reverse(path.begin(), path.end());
        for(auto i: path){
            cout<<i<<" ";
        }
        cout<<endl;
    } else cout<<"-1"<<endl;
}

int main(){
    
    // input
    int n,e; cin>>n>>e;

    // process
    vector<int> a[n];
    for(int i=0; i<e; i++){
        int x,y; cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }

    // output
    int node; cin>>node;
    cout<<a[node].size()<<endl;

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
/*
Question: You will be given an undirected graph as input. Then you will be given a node N. You need to print the number of nodes that are directly connected to the node N.

Sample Input 0:
6 5
0 1
0 2
0 3
2 3
4 5
2

Sample Output 0:
2

Sample Input 1:
6 5
0 1
0 2
0 3
2 3
4 5
0

Sample Output 1:
3

Sample Input 2:
7 7
0 1
1 2
2 3
1 3
4 0
0 5
5 6
1

Sample Output 2:
3

*/