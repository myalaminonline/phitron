#include<bits/stdc++.h>
using namespace std;

vector<int> a[1005];

void bfs(int src){
    
    queue<int> q;
    q.push(src);

    bool visited[1005];
    memset(visited, false, sizeof(visited));
    visited[src] = true;

    int level[1005];
    memset(level, -1, sizeof(level));
    level[src] = 0;
    
    while(!q.empty()){
        int current = q.front();
        q.pop();

        // cout<<current<<" ";
    
        for(auto i: a[current]){
            if(!visited[i]){
                q.push(i);
                visited[i] = true;
                level[i] = level[current]+1;
            }
        }
    }
    // cout<<endl;

    int L; cin>>L;
    vector<int> ans;
    for(int i=0; i<1005; i++){
        if(level[i] == L){
            ans.push_back(i);
        }
    }
    sort(ans.begin(), ans.end(), greater<int>());
    for(auto i: ans){
        cout<<i<<" ";
    }
    cout<<endl;
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
    int src;
    src = 0;
    bfs(src);

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
/*
Question: You will be given an undirected graph which will be connected as input. Then you will be given a level L. You need to print the node values at level L in descending order. The source will be 0 always.

sample input (1):
3 2
0 1
0 2
1

sample output (1):
2 1

sample input (2):
6 7
0 1
0 2
1 2
0 3
4 2
3 5
4 3
1

sample output (2):
3 2 1

sample input (3):
6 7
0 1
0 2
1 2
0 3
4 2
3 5
4 3
2

sample output (3):
5 4

*/