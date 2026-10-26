// DFS 0ms
// https://leetcode.com/problems/surrounded-regions/submissions/2181448291/
/*
class Solution {
public:
    int m, n;
    bool visited[205][205];
    vector<pair<int,int>> d =  {{-1,0}, {1,0}, {0,-1}, {0,1}};

    bool valid(int i, int j)
    {
        if(i<0 || i>=m || j<0 || j>=n)
            return false;
        return true;
    }

    void dfs(int si, int sj, vector<vector<char>>& grid){
        visited[si][sj] = true;
        for(int i=0; i<4; i++){
            int ci = si+d[i].first;
            int cj = sj+d[i].second;
            if(valid(ci, cj) && !visited[ci][cj] && grid[ci][cj]=='O')
                dfs(ci, cj, grid);
        }
    }

    void solve(vector<vector<char>>& board) {
        m = board.size();
        n = board[0].size();
        memset(visited,false,sizeof(visited));

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(!visited[i][j] && board[i][j]=='O' && (i==0 || i==m-1 || j==0 || j==n-1)){
                    dfs(i, j, board);
                }
            }
        }

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(!visited[i][j] && board[i][j]=='O'){
                    board[i][j] = 'X';
                }
            }
        }
    }
};
*/