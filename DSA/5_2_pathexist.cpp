#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> graph;
vector<bool> visited;

// void bfs(int src) {
//     queue<int> q;
//     q.push(src);
//     visited[src] = true;

//     while (!q.empty()) {
//         int current = q.front();
//         q.pop();

//         for (int neighbor : graph[current]) {
//             if (!visited[neighbor]) {
//                 visited[neighbor] = true;
//                 q.push(neighbor);
//             }
//         }
//     }
// }

void dfs(int node) {
    visited[node] = true;
    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor);
        }
    }
}

bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
    graph.assign(n, {});
    for (int i = 0; i < edges.size(); i++) {
        int x = edges[i][0];
        int y = edges[i][1];
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    visited.assign(n, false);
    // bfs(source);
    dfs(source);
    return visited[destination];
}

int main() {
    int n = 4;
    vector<vector<int>> edges = {{0, 1}, {1, 2}, {2, 3}};

    cout << validPath(n, edges, 0, 3) << endl;  // 1
    cout << validPath(n, edges, 0, 2) << endl;  // 1
    cout << validPath(n, edges, 3, 0) << endl;  // 1
    cout << validPath(n, edges, 0, 5) << endl;  // 0

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+

// DFS 349ms
// https://leetcode.com/problems/find-if-path-exists-in-graph/submissions/2177020776/
/*
class Solution {
public:
    vector<vector<int>> graph;
    vector<bool> visited;

    void dfs(int node) {
        visited[node] = true;
        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {
                dfs(neighbor);
            }
        }
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        graph.assign(n, {});
        for (int i = 0; i < edges.size(); i++) {
            int x = edges[i][0];
            int y = edges[i][1];
            graph[x].push_back(y);
            graph[y].push_back(x);
        }

        visited.assign(n, false);
        dfs(source);
        return visited[destination];
    }
};
*/


// DFS 317ms
// https://leetcode.com/problems/find-if-path-exists-in-graph/submissions/2177019715/
/*
class Solution {
public:
    vector<int> graph[200005];
    bool visited[200005];

    void dfs(int node) {
        visited[node] = true;
        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {
                dfs(neighbor);
            }
        }
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        for (int i = 0; i < edges.size(); i++) {
            int x = edges[i][0];
            int y = edges[i][1];
            graph[x].push_back(y);
            graph[y].push_back(x);
        }

        memset(visited,false,sizeof(visited));
        dfs(source);
        return visited[destination];
    }
};
*/

// BFS 336ms
// https://leetcode.com/problems/find-if-path-exists-in-graph/submissions/2179721731/
/*
class Solution {
public:
    vector<int> graph[200005];
    bool visited[200005];

    // void dfs(int node) {
    //     visited[node] = true;
    //     for (int neighbor : graph[node]) {
    //         if (!visited[neighbor]) {
    //             dfs(neighbor);
    //         }
    //     }
    // }

    void bfs(int src){
        queue<int> q;
        q.push(src);
        visited[src] = true;

        while(!q.empty()){
            int p = q.front();
            q.pop();

            for(int c : graph[p]){
                if(!visited[c]){
                    q.push(c);
                    visited[c] = true;
                }
            }
        }
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        for(int i=0; i<edges.size(); i++) {
            int x = edges[i][0];
            int y = edges[i][1];
            graph[x].push_back(y);
            graph[y].push_back(x);
        }

        memset(visited,false,sizeof(visited));
        bfs(source);
        return visited[destination];
    }
};
*/