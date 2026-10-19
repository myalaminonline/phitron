#include<bits/stdc++.h>
using namespace std;

int n, m;
char a[1005][1005];
bool visited[1005][1005];

vector<pair<int,int>> dir = {{-1,0},{1,0},{0,-1},{0,1}};

bool valid(int si, int sj){
    if(si < 0 || si >= n || sj < 0 || sj >= m) return false;
    return true;
}

void dfs(int si, int sj){
    visited[si][sj] = true;
    cout << si << " " << sj << endl;
    for(auto d : dir){
        int ci = si + d.first;
        int cj = sj + d.second;
        if(valid(ci, cj) && !visited[ci][cj] && a[ci][cj] == '.'){
            dfs(ci, cj);
        }
    }
}

int main(){
    
    // input
    cin>>n>>m;

    // process
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }

    // output
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    memset(visited, false, sizeof(visited));
    int room = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(!visited[i][j] && a[i][j] == '.'){
                dfs(i, j);
                room++;
                cout<<endl;
            }
        }
    }
    cout << "Number of rooms: " << room << endl;

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
//https://cses.fi/problemset/task/1192
/*
Time limit: 1.00 s
Memory limit: 512 MB

You are given a map of a building, and your task is to count the number of its rooms. The size of the map is n \times m squares, and each square is either floor or wall. You can walk left, right, up, and down through the floor squares.
Input
The first input line has two integers n and m: the height and width of the map.
Then there are n lines of m characters describing the map. Each character is either . (floor) or # (wall).
Output
Print one integer: the number of rooms.
Constraints

1 \le n,m \le 1000

Example
Input:
5 8
########
#..#...#
####.#.#
#..#...#
########

Output:
3
*/