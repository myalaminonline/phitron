#include <bits/stdc++.h>
using namespace std;

vector<int> a[200005];

void bfs(int src, int dest){

    queue<int> q;
    q.push(src);

    bool visited[200005];
    memset(visited, false, sizeof(visited));
    visited[src] = true;

    int level[200005];
    memset(level, -1, sizeof(level));
    level[src] = 1;

    int parent[200005];
    memset(parent, -1, sizeof(parent));
    parent[src] = -1;

    while(!q.empty()){
        int current = q.front();
        q.pop();

        // cout<<current<<" ";

        for(auto i : a[current]){
            if (!visited[i]){
                q.push(i);
                visited[i] = true;
                level[i] = level[current] + 1;
                parent[i] = current;
            }
        }
    }

    if(visited[dest]){
        cout << level[dest] << endl;

        vector<int> path;
        int current = dest;
        while(current != -1){
            path.push_back(current);
            current = parent[current];
        }
        reverse(path.begin(), path.end());
        for(auto i : path){
            cout << i << " ";
        }
        cout << endl;
    } else cout << "IMPOSSIBLE" << endl;
}

int main()
{

    // input
    int n, e;
    cin >> n >> e;

    // process
    while (e--)
    {
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }

    // output
    int src, dest;
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