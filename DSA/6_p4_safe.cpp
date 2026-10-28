// 7ms
// https://leetcode.com/problems/find-eventual-safe-states/submissions/2182928227/
/*
class Solution {
public:
    bool visited[10005];
    bool path[10005];
    vector<int> safe;
    
    bool dfs(int src, vector<vector<int>>& graph){
        visited[src] = true;
        path[src] = true;
        for(int c : graph[src]){
            if(visited[c] && path[c]){
                return true;
            }   
            if(!visited[c]){
                if(dfs(c, graph)){
                    return true;
                } 
            }   
        }
        safe.push_back(src);
        path[src] = false;
        return false;
    }

    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        for(int i=0; i<n; i++){
            if(!visited[i]){
                dfs(i, graph);
            }
        }
        sort(safe.begin(), safe.end());
        return safe;
    }
};
*/