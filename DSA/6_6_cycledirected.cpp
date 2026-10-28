#include<bits/stdc++.h>
using namespace std;

vector<int> a[105];
bool visited[105];
bool path[105];
bool cycle;

void dfs(int src){
    visited[src] = true;
    path[src] = true;

    for(auto c : a[src]){
        if(visited[c] && path[c]){
            cycle = true;
        }
        if(!visited[c]){
            dfs(c);
        }
    }

    path[src] = false;
}

int main(){
    int n, e; cin>>n>>e;
    while(e--){
        int x, y; cin>>x>>y;
        a[x].push_back(y);
        // a[y].push_back(x);
    }
    
    memset(visited, false, sizeof(visited));
    memset(path, false, sizeof(path));
    cycle = false;
    for(int i=0; i<n; i++){
        if(!visited[i]){
            dfs(i);
        }
    }

    if(cycle) cout<<"Cycle Detected.";
    else cout<<"No Cycle.";
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
/*
Sample Input 0:
6 5
0 1
1 2
2 3
3 0
4 5

Sample Output 0:
Cycle Detected.

Sample Input 1:
6 4
0 1
1 2
2 3
4 5

Sample Output 1:
No Cycle.

Sample Input 2:
2 1
0 1

Sample Output 2:
No Cycle.
*/