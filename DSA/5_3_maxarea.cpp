// DFS 35ms
// https://leetcode.com/problems/max-area-of-island/submissions/2178620381/
/*
class Solution {
public:
    int m, n;
    bool visited[55][55];
    vector<pair<int, int>> d = {{-1,0}, {1,0}, {0,-1}, {0,1}};
    int node = 0;
    int maximum = 0;

    bool valid(int i, int j){
        if(i<0 || i>=m || j<0 || j>=n){
            return false;
        }
        return true;
    }

    void dfs(int si, int sj, vector<vector<int>>& grid){
        visited[si][sj] = true;
        node++;

        for(int i=0; i<4; i++){
            int ci = si+d[i].first;
            int cj = sj+d[i].second;
            if(valid(ci, cj) && !visited[ci][cj] && grid[ci][cj]==1){
                dfs(ci, cj, grid);
            }
        }
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        memset(visited, false, sizeof(visited));
        int component = 0;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(!visited[i][j] && grid[i][j]==1){
                    component++;
                    node = 0;
                    dfs(i, j, grid);
                    cout<<"Node of Component"<<component<<": "<<node<<endl;
                    maximum = max(maximum, node);
                }
            }
        }
        cout<<"Total Components: "<<component<<endl;

        return maximum;
    }
};
*/

// BFS 37ms
// https://leetcode.com/problems/max-area-of-island/submissions/2180208888/
/*
class Solution {
public:
    int m, n;
    bool visited[55][55];
    vector<pair<int, int>> d = {{-1,0}, {1,0}, {0,-1}, {0,1}};
    int count = 0;
    int maximum = 0;

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
            int pi = p.first;
            int pj = p.second;
            q.pop();

            count++;

            for(int i=0; i<4; i++){
                int ci = pi+d[i].first;
                int cj = pj+d[i].second;
                if(valid(ci, cj) && !visited[ci][cj] && grid[ci][cj]==1){
                    q.push({ci, cj});
                    visited[ci][cj] = true;
                }
            }
        }
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        memset(visited, false, sizeof(visited));
        int component = 0;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(!visited[i][j] && grid[i][j]==1){
                    component++;

                    count = 0;
                    bfs(i, j, grid);
                    maximum = max(maximum, count);

                    cout<<"Node of Component"<<component<<": "<<count<<endl;
                }
            }
        }
        cout<<"Total Components: "<<component<<endl;

        return maximum;
    }
};
*/
