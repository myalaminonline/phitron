// DFS 0ms
// https://leetcode.com/problems/battleships-in-a-board/submissions/2181517539/
/*
class Solution {
public:
    int m, n;
    bool visited[205][205];
    vector<pair<int,int>> d =  {{-1,0}, {1,0}, {0,-1}, {0,1}};

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
            if(valid(ci, cj) && !visited[ci][cj] && grid[ci][cj]=='X'){
                dfs(ci, cj, grid);
            }
        }
    }

    int countBattleships(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();
        int count = 0;
        memset(visited,false,sizeof(visited));
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                if(!visited[i][j] && grid[i][j]=='X'){
                    dfs(i, j, grid);
                    count++;
                }
        return count;
    }
};
*/