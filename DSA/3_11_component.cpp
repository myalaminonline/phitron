#include<bits/stdc++.h>
using namespace std;

vector<int> a[1005];
bool visited[1005];

void dfs(int src){
    visited[src] = true;
    // cout << src << " ";
    for(auto child : a[src]){
        if(!visited[child]){
            dfs(child);
        }
    }
}

int main(){
    
    // input
    int n,e; cin>>n>>e;

    // process
    while(e--){
        int x,y; cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }

    // output
    memset(visited, false, sizeof(visited));
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
Sample Input 0:
8 6
1 2
0 5
2 3
6 7
4 5
1 3

Sample Output 0:
Component: 3

Sample Input 1:
8 7
1 2
0 5
2 3
6 7
4 5
1 3
6 1

Sample Output 1:
Component: 2

*/