// https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
/*
class Solution {
  public:
  int n;
  bool visited[100005];
  int parent[100005];
  bool cycle;

  void bfs(int src, vector<vector<int>>& adj){
      queue<int> q;
      q.push(src);
      visited[src] = true;

      while(!q.empty()){
          int p = q.front();
          q.pop();
          for(auto c : adj[p]){
              if(visited[c] && c!=parent[p]){
                  cycle = true;
              }
              if(!visited[c]){
                  q.push(c);
                  visited[c] = true;
                  parent[c] = p;
              }
          }
      }
  }
    bool isCycle(vector<vector<int>>& adj){
        n = adj.size();
        memset(visited, false, sizeof(visited));
        memset(parent, -1, sizeof(parent));
        cycle = false;
        for(int i=0; i<n; i++){
            if(!visited[i]){
                bfs(i, adj);
            }
        }
        if(cycle) return true;
        else return false;
        
    }
};
*/