#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> a;
vector<bool> visited;

int dfs(int src){
    visited[src] = true;
    int count = 1;
    for (int i : a[src]){
        if (!visited[i]){
            count += dfs(i);
        }
    }
    return count;
}

int main(){

    // input
    int n, e;
    cin >> n >> e;

    // process
    a.resize(n);
    visited.resize(n, false);

    while (e--){
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }

    // output
    vector<int> components;
    for(int i=0; i<n; i++){
        if(!visited[i]){
            components.push_back(dfs(i));
        }
    }
    sort(components.begin(), components.end());
    for(int c : components){
        cout << c << " ";
    }
    cout << endl;

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
/*
Question: You will be given an undirected graph as input. You need to tell the
number of nodes in each component in ascending order.

Sample Input 0:
6 5
0 1
0 2
0 3
2 3
4 5

Sample Output 0:
2 4

Sample Input 1:
9 7
0 1
0 2
0 3
2 3
4 5
6 8
7 6

Sample Output 1:
2 3 4

Sample Input 2:
7 7
0 1
1 2
2 3
1 3
4 0
0 5
5 6

Sample Output 2:
7

Sample Input 3:
10 5
1 2
2 3
1 3
4 0
5 6

Sample Output 3:
1 1 1 2 2 3
(Because 7 8 and 9 nodes are not connected, but they are also components)
*/