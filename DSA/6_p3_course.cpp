// DFS 8ms
// https://leetcode.com/problems/course-schedule/submissions/2182835839/
/*
class Solution {
public:
    bool visited[2005];
    vector<int> a[2005];
    bool path[2005];
    bool cycle = false;

    void dfs(int src){
        visited[src] = true;
        path[src] = true;
        for(int c : a[src]){
            if(visited[c] && path[c]){
                cycle = true;
            }  
            if(!visited[c]){
                dfs(c);
            }
        }
        path[src] = false;
    }

    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        for(auto v : prerequisites){
            int x = v[0];
            int y = v[1];
            a[x].push_back(y);
        }
        for(int i=0; i<n; i++){
            if(!visited[i]){
                dfs(i);
            }
        }
        return !cycle;
    }
};
*/