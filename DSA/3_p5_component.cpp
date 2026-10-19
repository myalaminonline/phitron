#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> a;
vector<bool> visited;

void dfs(int src){
    visited[src] = true;
    // cout << src << " ";
    for(auto i : a[src]){
        if(!visited[i]){
            dfs(i);
        }
    }
}

int main(){
    
    // input
    int n,e; cin>>n>>e;

    // process
    a.resize(n);
    visited.resize(n, false);

    while(e--){
        int x,y; cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }

    // output
    int component = 0;
    for(int i=0; i<n; i++){
        if(!visited[i]){
            dfs(i);
            component++;
        }
    }
    cout << "Component: " << component << endl;

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
/*
Question: You will be given an undirected graph as input. You need to tell the number of components in this graph.

Sample Input 0:
6 5
0 1
0 2
0 3
2 3
4 5

Sample Output 0:
Component: 2

Sample Input 1:
9 7
0 1
0 2
0 3
2 3
4 5
6 8
7 6

Sample Output 1:
Component: 3

Sample Input 2:
7 7
0 1
1 2
2 3
1 3
4 0
0 5
5 6

Sample Output 2:
Component: 1

Sample Input 3:
10 5
1 2
2 3
1 3
4 0
5 6

Sample Output 3:
Component: 6
(Because 7 8 and 9 nodes are not connected, but they are also components)
*/