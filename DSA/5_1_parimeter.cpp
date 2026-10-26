// DFS 12ms
// https://leetcode.com/problems/island-perimeter/submissions/2176751738/
/*
class Solution {
public:
    bool visited[105][105];
    vector<pair<int,int>> d={{-1,0},{1,0},{0,-1},{0,1}};
    int n, m;
    int count;

    bool valid(int i, int j) {
        if (i<0 || i>=n || j<0 || j>=m)
            return false;
        return true;
    }

    void dfs(int si, int sj, vector<vector<int>>& grid) {
        // cout << si << " " << sj << endl;
        visited[si][sj] = true;
        for (int i=0; i<4; i++) {
            int ci = si + d[i].first;
            int cj = sj + d[i].second;
            // if(valid(ci,cj) && !visited[ci][cj] && grid[ci][cj]==1){
            //     dfs(ci,cj,grid);
            // }

            // if(valid(ci,cj)==false)
            //     count++;
            // else if(valid(ci,cj)==true && grid[ci][cj]==0)
            //     count++;
            // else if(valid(ci,cj)==true && grid[ci][cj]==1 && visited[ci][cj]==false)
            //     dfs(ci,cj,grid);

            if(!valid(ci,cj)) count++;
            else if(grid[ci][cj]==0) count++;
            else if(!visited[ci][cj]) dfs(ci,cj,grid);
        }
    }

    int islandPerimeter(vector<vector<int>>& grid) {
        count = 0;
        n = grid.size();
        m = grid[0].size();
        memset(visited,false,sizeof(visited));
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(!visited[i][j] && grid[i][j]==1) {
                    dfs(i,j,grid);
                }
            }
        }
        return count;
    }
};
*/

// DFS 6ms
// https://leetcode.com/problems/island-perimeter/submissions/2176772304/
/*
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int perimeter = 0;
        for(int i=0; i<rows; ++i){
            for(int j=0; j<cols; ++j){
                if(grid[i][j] == 1){
                    if(i==0 || grid[i-1][j]==0) perimeter++;
                    if(i==rows-1 || grid[i+1][j]==0) perimeter++;
                    if(j==0 || grid[i][j-1]==0) perimeter++;
                    if(j==cols-1 || grid[i][j+1]==0) perimeter++;
                }
            }
        }
        return perimeter;
    }
};
*/

// BFS 27ms
// https://leetcode.com/problems/island-perimeter/submissions/2179695412/
/*
class Solution {
public:
    bool visited[105][105];
    vector<pair<int,int>> d={{-1,0},{1,0},{0,-1},{0,1}};
    int n, m;
    int count;

    bool valid(int i, int j) {
        if (i<0 || i>=n || j<0 || j>=m)
            return false;
        return true;
    }

    void bfs(int si, int sj, vector<vector<int>>& grid){
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
                if(!valid(ci,cj)){
                    count++;
                } else if(grid[ci][cj]==0){
                    count++;
                } else if(!visited[ci][cj]){
                    q.push({ci, cj});
                    visited[ci][cj] = true;
                }
            }
        }
    }

    int islandPerimeter(vector<vector<int>>& grid) {
        count = 0;
        n = grid.size();
        m = grid[0].size();
        memset(visited,false,sizeof(visited));
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(!visited[i][j] && grid[i][j]==1) {
                    bfs(i,j,grid);
                }
            }
        }
        return count;
    }
};
*/