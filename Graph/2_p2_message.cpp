#include<bits/stdc++.h>
using namespace std;

vector<int> v[200005];

void bfs(int src, int dest){
    
    queue<int> q;
    q.push(src);

    bool visits[200005];
    memset(visits, false, sizeof(visits));
    visits[src] = true;

    int levels[200005];
    memset(levels, -1, sizeof(levels));
    levels[src] = 1;

    int parents[200005];
    memset(parents, -1, sizeof(parents));
    parents[src] = -1;
    
    while(!q.empty()){
        int current = q.front();
        q.pop();

        // cout<<current<<" ";

        for(auto node: v[current]){
            if(!visits[node]){
                q.push(node);
                visits[node] = true;
                levels[node] = levels[current]+1;
                parents[node] = current;
            }
        }
    }

    if(visits[dest]){
        cout<<levels[dest]<<endl;

        vector<int> paths;
        int current = dest;
        while(current != -1){
            paths.push_back(current);
            current = parents[current];
        }
        reverse(paths.begin(), paths.end());
        for(int node : paths){
            cout<<node<<" ";
        }
        cout<<endl;
    } else cout<<"IMPOSSIBLE"<<endl;
}

int main(){
    
    int n,e; cin>>n>>e;
    while(e--){
        int a,b; cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int src,dest;
    src = 1;
    dest = n;
    bfs(src, dest);

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// https://cses.fi/problemset/task/1667
/*
Time limit: 1.00 s
Memory limit: 512 MB

Syrjälä's network has n computers and m connections. Your task is to find out if Uolevi can send a message to Maija, and if it is possible, what is the minimum number of computers on such a route.
Input
The first input line has two integers n and m: the number of computers and connections. The computers are numbered 1,2,...,n. Uolevi's computer is 1 and Maija's computer is n.
Then, there are m lines describing the connections. Each line has two integers a and b: there is a connection between those computers.
Every connection is between two different computers, and there is at most one connection between any two computers.
Output
If it is possible to send a message, first print k: the minimum number of computers on a valid route. After this, print an example of such a route. You can print any valid solution.
If there are no routes, print "IMPOSSIBLE".
Constraints

2 <= n <= 10^5
1 <= m <= 2 * 10^5
1 <= a,b <= n

Example
Input:
5 5
1 2
1 3
1 4
2 3
5 4

Output:
3
1 4 5 
*/