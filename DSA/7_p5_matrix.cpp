// https://leetcode.com/problems/01-matrix/submissions/2193053882/
/*
class Solution {
public:
    vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
    int m,n;

    bool valid(int i, int j){
        if(i<0 || i>=m || j<0 || j>=n){
            return false;
        }   
        return true;
    }

    void bfs(vector<vector<int>>& grid){
        bool visited[m][n];
        memset(visited,false,sizeof(visited));
        queue<pair<int,int>> q;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 0){
                    q.push({i,j});
                    visited[i][j] = true;
                }
            }
        }
        while(!q.empty()){
            pair<int,int> parent = q.front();
            q.pop();
            int parent_i = parent.first;
            int parent_j = parent.second;
            for(int i=0; i<4; i++){
                int child_i = parent_i + d[i].first;
                int child_j = parent_j + d[i].second;
                if(valid(child_i,child_j) && (grid[child_i][child_j] > grid[parent_i][parent_j] + 1 || !visited[child_i][child_j])){
                    q.push({child_i,child_j});
                    grid[child_i][child_j] = grid[parent_i][parent_j] + 1;
                    visited[child_i][child_j] = true;
                }
            }
        }
    }

    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        m = mat.size();
        n = mat[0].size();
        bfs(mat);
        return mat;
    }
};
*/