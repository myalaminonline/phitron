// DFS 26ms
// https://leetcode.com/problems/number-of-islands/submissions/2178678469
/*
class Solution {
public:
    int m, n;
    bool visited[305][305];
    vector<pair<int, int>> d = {{-1,0}, {1,0}, {0,-1}, {0,1}};

    bool valid(int i, int j){
        if(i<0 || i>=m || j<0 || j>=n){
            return false;
        }
        return true;
    }

    void dfs(int si, int sj, vector<vector<char>>& grid){
        visited[si][sj] = true;
        for(int i=0; i<4; i++){
            int ci = si+d[i].first;
            int cj = sj+d[i].second;
            if(valid(ci, cj) && !visited[ci][cj] && grid[ci][cj]=='1'){
                dfs(ci, cj, grid);
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();
        memset(visited, false, sizeof(visited));
        int island = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(!visited[i][j] && grid[i][j]=='1'){
                    island++;
                    dfs(i, j, grid);
                }
            }
        }
        return island;
    }
};
*/

// BFS 32ms
// https://leetcode.com/problems/number-of-islands/submissions/2180224506/
/*
class Solution {
public:
    int m, n;
    bool visited[305][305];
    vector<pair<int, int>> d = {{-1,0}, {1,0}, {0,-1}, {0,1}};

    bool valid(int i, int j){
        if(i<0 || i>=m || j<0 || j>=n){
            return false;
        }
        return true;
    }

    // void dfs(int si, int sj, vector<vector<char>>& grid){
    //     visited[si][sj] = true;
    //     for(int i=0; i<4; i++){
    //         int ci = si+d[i].first;
    //         int cj = sj+d[i].second;
    //         if(valid(ci, cj) && !visited[ci][cj] && grid[ci][cj]=='1'){
    //             dfs(ci, cj, grid);
    //         }
    //     }
    // }

    void bfs(int si, int sj, vector<vector<char>>& grid){
        queue<pair<int, int>> q;
        q.push({si, sj}); 
        visited[si][sj] = true;

        while(!q.empty()){
            pair<int, int> p = q.front();
            int pi = p.first;
            int pj = p.second;
            q.pop();

            for(int i=0; i<4; i++){
                int ci = pi+d[i].first;
                int cj = pj+d[i].second;
                if(valid(ci, cj) && !visited[ci][cj] && grid[ci][cj]=='1'){
                    q.push({ci, cj});
                    visited[ci][cj] = true;
                }
            }
        } 
    }

    int numIslands(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();
        memset(visited, false, sizeof(visited));
        int island = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(!visited[i][j] && grid[i][j]=='1'){
                    island++;
                    bfs(i, j, grid);
                }
            }
        }
        return island;
    }
};
*/

