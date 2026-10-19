#include<bits/stdc++.h>
using namespace std;

vector<int> a[1005];
bool visited[1005];
int level[1005];
int parent[1005];

void bfs(int src){
    
    queue<int> q;
    q.push(src);

    memset(visited, false, sizeof(visited));
    visited[src] = true;
    memset(level, -1, sizeof(level));
    level[src] = 0;
    memset(parent, -1, sizeof(parent));
    parent[src] = -1;

    while(!q.empty()){
        int current = q.front();
        q.pop();

        // cout<<current<<" ";

        for(auto child: a[current]){
            if(!visited[child]){
                q.push(child);
                visited[child] = true;
                level[child] = level[current]+1;
                parent[child] = current;
            }
        }
    }
}

int main(){
    
    // input
    int n,e; cin>>n>>e;

    // process
    for(int i=0; i<e; i++){
        int x,y; cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }

    // output
    int src, dest;

    cin>>src>>dest;
    bfs(src);
    if(visited[dest]){
        cout<<"Shortest Distance between "<<src<<" and "<<dest<<" is: "<<level[dest]<<endl;
    } else cout<<"-1"<<endl;

    cin>>src>>dest;
    bfs(src);
    if(visited[dest]){
        vector<int> path;
        int current = dest;
        while(current != -1){
            path.push_back(current);
            current = parent[current];
        }
        reverse(path.begin(), path.end());
        cout<<"Shortest Path between "<<src<<" and "<<dest<<" is: ";
        for(auto i: path){
            cout<<i<<" ";
        }
        cout<<endl;
    } else cout<<"-1"<<endl;

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
/*
Find out what is the shortest distance between 0 to 3 using BFS.
Print the shortest path between 0 to 2 using BFS.

Sample Input 0:
7 8
0 5
5 1
1 6
1 4
6 4
3 6
3 2
2 4
0 3
0 2

Sample Output 0:
Shortest Distance: 3
Shortest Path: 0 5 1 6 3
*/