// DFS 8ms
// https://leetcode.com/problems/maximum-number-of-fish-in-a-grid/submissions/2181307819/
/*
class Solution {
public:
    int m, n;
    bool visited[15][15];
    int count;
    vector<pair<int, int>> d = {{-1,0}, {1,0}, {0,-1}, {0,1}};

    bool valid(int i, int j){
        if(i<0 || i>=m || j<0 || j>=n){
            return false;
        }
        return true;
    }

    void dfs(int si, int sj, vector<vector<int>>& grid){
        visited[si][sj] = true;
        count += grid[si][sj];
        
        for(int i=0; i<4; i++){
            int ci = si+d[i].first;
            int cj = sj+d[i].second;
            if(valid(ci, cj) && !visited[ci][cj] && grid[ci][cj]>=1)
                dfs(ci, cj, grid);
        }
    }

    int findMaxFish(vector<vector<int>>& grid){
        m = grid.size();
        n = grid[0].size();
        memset(visited, false, sizeof(visited));
        int maximum = 0;

        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++){
                if(!visited[i][j] && grid[i][j]>=1){
                    count = 0;
                    dfs(i, j, grid);
                    maximum = max(maximum, count);
                }
            }
        return maximum;
    }
};
*/