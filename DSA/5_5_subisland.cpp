// DFS 37ms
// https://leetcode.com/problems/count-sub-islands/submissions/2178856312/
/*
class Solution {
public:
    int m, n;
    bool visited[505][505];
    vector<pair<int, int>> d = {{-1,0}, {1,0}, {0,-1}, {0,1}};
    bool flag;

    bool valid(int i, int j){
        if(i<0 || i>=m || j<0 || j>=n){
            return false;
        }
        return true;
    }

    void dfs(int si, int sj, vector<vector<int>>& grid1, vector<vector<int>>& grid2){
        visited[si][sj] = true;
        // cout<<si<<sj<<" ";
        if(grid1[si][sj]==0){
            flag = false;
        }

        for(int i=0; i<4; i++){
            int ci = si+d[i].first;
            int cj = sj+d[i].second;
            if(valid(ci, cj) && !visited[ci][cj] && grid2[ci][cj]==1){
                dfs(ci, cj, grid1, grid2);
            }
        }
    }

    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        m = grid2.size();
        n = grid2[0].size();
        memset(visited, false, sizeof(visited));
        // int component = 0;
        int count = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(!visited[i][j] && grid2[i][j]==1){
                    // component++;
                    // cout<<"Component"<<component<<": ";
                    flag = true;
                    dfs(i, j, grid1, grid2);
                    // cout<<endl<<flag<<endl<<endl;
                    if(flag) count++;
                }
            }
        }
        return count;
    }
};
*/

// BFS 185ms
// https://leetcode.com/problems/count-sub-islands/submissions/2180238343/
/*
class Solution {
public:
    int m, n;
    bool visited[505][505];
    vector<pair<int, int>> d = {{-1,0}, {1,0}, {0,-1}, {0,1}};
    bool flag;

    bool valid(int i, int j){
        if(i<0 || i>=m || j<0 || j>=n){
            return false;
        }
        return true;
    }

    // void dfs(int si, int sj, vector<vector<int>>& grid1, vector<vector<int>>& grid2){
    //     visited[si][sj] = true;
    //     // cout<<si<<sj<<" ";
    //     if(grid1[si][sj]==0){
    //         flag = false;
    //     }

    //     for(int i=0; i<4; i++){
    //         int ci = si+d[i].first;
    //         int cj = sj+d[i].second;
    //         if(valid(ci, cj) && !visited[ci][cj] && grid2[ci][cj]==1){
    //             dfs(ci, cj, grid1, grid2);
    //         }
    //     }
    // }

    void bfs(int si, int sj, vector<vector<int>>& grid1, vector<vector<int>>& grid2){
        queue<pair<int, int>> q;
        q.push({si, sj});
        visited[si][sj] = true;

        while(!q.empty()){
            pair<int, int> p = q.front();
            int pi = p.first;
            int pj = p.second;
            q.pop();

            if(grid1[pi][pj]==0){
                flag = false;
            }

            for(int i=0; i<4; i++){
                int ci = pi+d[i].first;
                int cj = pj+d[i].second;
                if(valid(ci, cj) && !visited[ci][cj] && grid2[ci][cj]==1){
                    q.push({ci, cj});
                    visited[ci][cj] = true;
                }
            }
        }
    }

    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        m = grid2.size();
        n = grid2[0].size();
        memset(visited, false, sizeof(visited));
        // int component = 0;
        int count = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(!visited[i][j] && grid2[i][j]==1){
                    // component++;
                    // cout<<"Component"<<component<<": ";
                    flag = true;
                    bfs(i, j, grid1, grid2);
                    // cout<<endl<<flag<<endl<<endl;
                    if(flag) count++;
                }
            }
        }
        return count;
    }
};
*/
