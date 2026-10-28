#include<bits/stdc++.h>
using namespace std;

vector<int> a[105];
bool visited[105];
int parent[105];
bool cycle;

void bfs(int src){
    queue<int> q;
    q.push(src);
    visited[src] = true;

    while(!q.empty()){
        int p = q.front();
        q.pop();
        for(auto c : a[p]){
            if(visited[c] && c!=parent[p]){
                cycle = true;
            }
            if(!visited[c]){
                q.push(c);
                visited[c] = true;
                parent[c] = p;
            }
        }
    }
}

int main(){
    int n, e; cin>>n>>e;
    while(e--){
        int x, y; cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
    memset(parent, -1, sizeof(parent));
    cycle = false;
    for(int i=0; i<n; i++){
        if(!visited[i]){
            bfs(i);
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