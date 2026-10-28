// 121ms
// https://leetcode.com/problems/number-of-enclaves/submissions/2182961051/
/*
class Solution {
public:
    int m, n;
    bool visited[505][505];
    int count;
    bool flag;
    vector<pair<int, int>> d = {{-1,0}, {1,0}, {0,-1}, {0,1}};
  
    bool valid(int i,int j){
        return i>=0 && i<m && j>=0 && j<n;
    }   

    void dfs(int si, int sj, vector<vector<int>>& grid){
        visited[si][sj] = true;
        count++;
        for(int i=0; i<4; i++){
            int ci = si+d[i].first;
            int cj = sj+d[i].second;
            if(!valid(ci,cj))
                flag = false;
            else if(!visited[ci][cj] && grid[ci][cj])
                dfs(ci, cj, grid);
        }
    }

    int numEnclaves(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        int ans = 0;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(!visited[i][j] && grid[i][j]){
                    cout<<i<<j<<" ";
                    count = 0, flag = true;
                    dfs(i, j, grid);
                    if(flag) ans += count;
                }
            }
        }
        return ans;
    }
};
*/