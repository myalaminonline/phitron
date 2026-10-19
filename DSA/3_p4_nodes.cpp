#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> a;
vector<bool> visited;

int dfs(int src){
    visited[src] = true;
    int count = 1;
    for(auto i: a[src]){
        if(!visited[i]){
            count += dfs(i);
        }
    }
    return count;
}

int main(){
    
    // input
    int n,e; cin>>n>>e;

    // process
    a.resize(n);
    visited.resize(n, false);

    for(int i=0; i<e; i++){
        int x,y; cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }

    // output
    int src; cin>>src;
    cout<<dfs(src)<<endl;

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
/*
Question: You will be given an undirected graph as input. Then you will be given a node N. You need to tell the number of nodes that can be visited from node N.

Sample Input 0:
6 5
0 1
0 2
0 3
2 3
4 5
2

Sample Output 0:
4

Sample Input 1:
6 5
0 1
0 2
0 3
2 3
4 5
4

Sample Output 1:
2

Sample Input 2:
7 6
0 1
1 2
2 3
1 3
4 0
5 6
1

Sample Output 2:
5
*/