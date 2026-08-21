#include<bits/stdc++.h>
using namespace std;

vector<int> v[1005];

void bfs(int src){
    
    queue<int> q;
    q.push(src);

    bool visits[1005];
    memset(visits, false, sizeof(visits));
    visits[src] = true;

    int levels[1005];
    memset(levels, -1, sizeof(levels));
    levels[src] = 0;
    
    while(!q.empty()){
        int current = q.front();
        q.pop();

        cout<<current<<" ";
    
        for(auto node: v[current]){
            if(!visits[node]){
                q.push(node);
                visits[node] = true;
                levels[node] = levels[current]+1;
            }
        }
    }
    cout<<endl;

    for(int i=0; i<1005; i++){
        if(v[i].size() > 0){
            cout<<"Node: "<<i<<" Level: "<<levels[i]<<endl;
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

    int src; cin>>src;
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