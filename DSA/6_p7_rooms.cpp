// https://cses.fi/problemset/result/19116214/
/*
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
    //cout << si << " " << sj << endl;
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
    memset(visited, false, sizeof(visited));
    int room = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(!visited[i][j] && a[i][j] == '.'){
                dfs(i, j);
                room++;
            }
        }
    }
    cout << room << endl;
 
    return 0;
}
*/