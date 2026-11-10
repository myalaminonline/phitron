// https://leetcode.com/problems/minimum-score-of-a-path-between-two-cities/submissions/2192940072/
/*
class Solution {
public:
    vector<pair<int,int>> adjacency_list[100005];
    bool visited[100005];
    int minimum = INT_MAX;

    void dfs(int source){
        visited[source] = true;
        for(auto child : adjacency_list[source]){
            minimum = min(minimum,child.second);
            if(!visited[child.first]){
                dfs(child.first);
            }
        }
    }

    int minScore(int n, vector<vector<int>>& roads) {
        for(auto v : roads){
            int a = v[0], b = v[1], c = v[2];
            adjacency_list[a].push_back({b,c});
            adjacency_list[b].push_back({a,c});
        }
        memset(visited,false,sizeof(visited));
        dfs(1);
        return minimum;
    }
};
*/