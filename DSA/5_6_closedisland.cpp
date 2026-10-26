// DFS 1ms
// https://leetcode.com/problems/number-of-closed-islands/submissions/2178940357/
/*
class Solution {
public:
    int m, n;
    bool visited[105][105];
    vector<pair<int, int>> d = {{-1,0}, {1,0}, {0,-1}, {0,1}};
    bool flag;

    bool valid(int i, int j){
        if(i<0 || i>=m || j<0 || j>=n){
            return false;
        }
        return true;
    }

    void dfs(int si, int sj, vector<vector<int>>& grid){
        visited[si][sj] = true;
        // cout<<si<<sj<<" ";
        
        for(int i=0; i<4; i++){
            int ci = si+d[i].first;
            int cj = sj+d[i].second;
            if(!valid(ci, cj)){
                flag = false;
            }
            if(valid(ci, cj) && !visited[ci][cj] && grid[ci][cj]==0){
                dfs(ci, cj, grid);
            }
        }
    }

    int closedIsland(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        memset(visited, false, sizeof(visited));
        // int component = 0;
        int count = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(!visited[i][j] && grid[i][j]==0){
                    // component++;
                    // cout<<"Component"<<component<<": ";
                    flag = true;
                    dfs(i, j, grid);
                    // cout<<endl<<flag<<endl<<endl;
                    if(flag) count++;
                }
            }
        }
        return count;
    }
};
*/

// BFS 1ms
// https://leetcode.com/problems/number-of-closed-islands/submissions/2179080530/
/*
class Solution {
public:
    int m, n;
    bool visited[105][105];
    vector<pair<int, int>> d = {{-1,0}, {1,0}, {0,-1}, {0,1}};
    bool flag;

    bool valid(int i, int j){
        if(i<0 || i>=m || j<0 || j>=n){
            return false;
        }
        return true;
    }

    void bfs(int si, int sj, vector<vector<int>>& grid){
        queue<pair<int, int>> q;
        q.push({si, sj});
        visited[si][sj] = true;

        while(!q.empty()){
            pair<int, int> p = q.front();
            q.pop();
            int pi = p.first;
            int pj = p.second;
            for(int i=0; i<4; i++){
                int ci = pi+d[i].first;
                int cj = pj+d[i].second;
                if(!valid(ci, cj)){
                    flag = false;
                }
                if(valid(ci, cj) && !visited[ci][cj] && grid[ci][cj]==0){
                    q.push({ci, cj});
                    visited[ci][cj] = true;
                }
            }
        }
    }

    int closedIsland(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        memset(visited, false, sizeof(visited));
        // int component = 0;
        int count = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(!visited[i][j] && grid[i][j]==0){
                    // component++;
                    // cout<<"Component"<<component<<": ";
                    flag = true;
                    bfs(i, j, grid);
                    // cout<<endl<<flag<<endl<<endl;
                    if(flag) count++;
                }
            }
        }
        return count;
    }
};
*/