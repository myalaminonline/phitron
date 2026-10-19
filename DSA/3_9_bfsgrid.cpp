#include<bits/stdc++.h>
using namespace std;

int n, m;
char a[105][105];
bool visited[105][105];
int level[105][105];
vector<pair<int,int>> dir = {{-1,0},{1,0},{0,-1},{0,1}};

bool valid(int si, int sj){
    if(si < 0 || si >= n || sj < 0 || sj >= m) return false;
    return true;
}

void bfs(int si, int sj){
    queue<pair<int,int>> q;
    q.push({si, sj});
    visited[si][sj] = true;
    level[si][sj] = 0;

    while(!q.empty()){
        auto current = q.front();
        q.pop();
        
        cout << current.first << " " << current.second << endl;

        for(auto d : dir){
            int ci = current.first + d.first;
            int cj = current.second + d.second;
            if(valid(ci, cj) && !visited[ci][cj]){
                q.push({ci, cj});
                visited[ci][cj] = true;
                level[ci][cj] = level[current.first][current.second] + 1;
            }
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

    int si, sj; cin>>si>>sj;
    int di, dj; cin>>di>>dj;
    if(valid(si, sj)){
        memset(visited, false, sizeof(visited));
        memset(level, -1, sizeof(level));
        bfs(si, sj);
        cout << endl << "Shortest Distance: "<< level[di][dj] << endl;
    } else {
        cout<<"Invalid Starting!"<<endl;
    }

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
/*
Sample Input:
3 4
....
....
....
1 2
2 0

Sample Output:
. . . . 
. . . . 
. . . . 

1 2
0 2
2 2
1 1
1 3
0 1
0 3
2 1
2 3
1 0
0 0
2 0
Shortest distance: 3

*/