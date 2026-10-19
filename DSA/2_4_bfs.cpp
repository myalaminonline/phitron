#include<bits/stdc++.h>
using namespace std;

vector<int> a[1005];
bool visited[1005];

void bfs(int src){
    queue<int> q;
    q.push(src);
    visited[src] = true;

    while(!q.empty()){
        int current = q.front();
        q.pop();

        cout<<current<<" ";

        for(auto i : a[current]){
            if(!visited[i]){
                q.push(i);
                visited[i] = true;
            }
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
    bfs(0);

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
/*
sample input:
7 8
0 1
1 3
3 2
1 4
3 5
2 5
5 6
4 6

sample output:
0 1 3 4 2 5 6 
*/