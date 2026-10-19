#include<bits/stdc++.h>
using namespace std;

int n, m;
char a[105][105];
bool visited[105][105];
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
        if(valid(ci, cj) && !visited[ci][cj]){
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

    int si, sj; cin>>si>>sj;
    if(valid(si, sj)){
        memset(visited, false, sizeof(visited));
        dfs(si, sj);
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

Sample Output:
. . . . 
. . . . 
. . . . 

1 2
0 2
0 1
1 1
2 1
2 0
1 0
0 0
2 2
2 3
1 3
0 3

*/