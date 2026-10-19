#include<bits/stdc++.h>
using namespace std;

vector<int> a[1005];
bool visited[1005];

void dfs(int src){
    visited[src] = true;
    cout << src << " ";
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
    while(e--){
        int x,y; cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }

    // output
    dfs(0);
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
/*
Sample Input:
7 7
0 2
2 4
0 1
1 5
1 3
0 3
3 6

Sample Output:
0 2 4 1 5 3 6
*/