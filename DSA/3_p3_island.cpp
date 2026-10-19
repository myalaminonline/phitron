// 1 ms solution using DFS
/*
class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int count=0;

        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(i==0 || i==m-1 || j==0 || j==n-1){
                    if(grid[i][j]==0) dfs(grid,i,j,m,n);
                }
            }
        }

        for(int i=1; i<m-1; i++) {
            for(int j=1; j<n-1; j++) {
                if(grid[i][j]==0) {
                    count++;
                    dfs(grid,i,j,m,n);
                }
            }
        }

        return count;
    }

private:
    void dfs(vector<vector<int>>& grid, int i, int j, int m, int n) {
        if(i<0 || i>=m || j<0 || j>=n) return;
        if(grid[i][j]==1) return;
        grid[i][j]=1; 
        dfs(grid,i+1,j,m,n);
        dfs(grid,i-1,j,m,n);
        dfs(grid,i,j+1,m,n);
        dfs(grid,i,j-1,m,n);
    }
};
*/

// 0 ms solution using DFS
/*
class Solution {
public:
    bool dfs(vector<vector<int>>& grid, int i, int j, int n, int m) {
        if(i<0 || i>=n || j<0 ||  j>=m) return false;
        if(grid[i][j] != 0) return true;
        grid[i][j] = 1;
        bool r1 = dfs(grid, i+1, j, n, m);
        bool r2 = dfs(grid, i-1, j, n, m);
        bool r3 = dfs(grid, i, j+1, n, m);
        bool r4 = dfs(grid, i, j-1, n, m);
        return r1 && r2 && r3 && r4;
    }
    int closedIsland(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        int count=0;
        for(int i=1; i<n-1; i++){
            for(int j=1; j<m-1; j++){
                if(grid[i][j]==0){
                    if(dfs(grid,i,j,n,m)) count++; 
                }
            }
        }
        return count;
    }
};
*/