// 4ms
// https://leetcode.com/problems/number-of-provinces/submissions/2182979511/
/*
class Solution {
public:
    vector<int> a[205];
    bool visited[205];

    void dfs(int src){
        visited[src] = true;
        for(int c : a[src]){
            if(!visited[c]){
                dfs(c);
            }   
        }      
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(isConnected[i][j]==1){
                    a[i].push_back(j);
                    a[j].push_back(i);
                }
            }
        }
        int count = 0;
        for(int i=0; i<n; i++){
            if(!visited[i]){
                dfs(i);
                count++;
            }
        }
        return count;
    }
};
*/