#include<bits/stdc++.h>
using namespace std;

vector<int> v[1005];

void bfs(int src, int dest){
    
    queue<int> q;
    q.push(src);

    bool visits[1005];
    memset(visits, false, sizeof(visits));
    visits[src] = true;
    
    while(!q.empty()){
        int current = q.front();
        q.pop();

        cout<<current<<" ";

        for(auto node: v[current]){
            if(!visits[node]){
                q.push(node);
                visits[node] = true;
            }
        }
    }

    cout<<endl;
}

int main(){
    
    int n,e; cin>>n>>e;
    while(e--){
        int a,b; cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int src,dest; cin>>src>>dest;
    bfs(src, dest);

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
0
6

sample output:
0 1 3 4 2 5 6 

*/