// https://leetcode.com/problems/map-of-highest-peak/submissions/2192975925/
/*
class Solution {
public:
    bool visited[1005][1005];
    vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
    int m,n;

    bool valid(int i, int j){
        if(i<0 || i>=m || j<0 || j>=n){
            return false;
        } 
        return true;
    }

    void bfs(vector<vector<int>>& grid){
        queue<pair<int,int>> q;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 1){
                    grid[i][j] = 0;
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
                if(valid(child_i,child_j) && !visited[child_i][child_j]){
                    grid[child_i][child_j] = grid[parent_i][parent_j] + 1;
                    q.push({child_i,child_j});
                    visited[child_i][child_j] = true;
                }
            }
        }
    }

    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        m = isWater.size();
        n = isWater[0].size();
        bfs(isWater);
        return isWater; 
    }
};
*/