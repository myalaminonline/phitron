// https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
/*
class Solution {
	public:
	
	int n;
	bool visited[100005];
	int parent[100005];
	bool cycle;
	
	void dfs(int src, vector<vector<int>> & adj){
		visited[src] = true;
		
		for(auto c : adj[src]){
			if(visited[c] && c != parent[src]){
				cycle = true;
			}
			if(!visited[c]){
				parent[c] = src;
				dfs(c, adj);
			}
		}
	}
		
	bool isCycle(vector<vector<int>> & adj){
		n = adj.size();
		memset(visited, false, sizeof(visited));
		memset(parent, -1, sizeof(parent));
		cycle = false;
		for(int i=0; i<n; i++){
			if(!visited[i]){
				dfs(i, adj);
			}
		}
		if(cycle) return true;
		else return false;
	}
};
*/