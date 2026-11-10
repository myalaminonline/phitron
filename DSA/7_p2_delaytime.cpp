// https://leetcode.com/problems/network-delay-time/submissions/2192630538/
/*
class Solution {
public:
    vector<pair<int,int>> adjacency_list[105];
    int distance[105];

    void dijkstra(int src)
    {
        priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        pq.push({0, src});
        distance[src] = 0;
        while(!pq.empty())
        {
            pair<int,int> parent = pq.top();
            pq.pop();
            int parent_node = parent.second;
            int parent_distance = parent.first;
            for(auto child : adjacency_list[parent_node])
            {
                int child_node = child.first;
                int child_distance = child.second;
                if(parent_distance + child_distance < distance[child_node])
                {
                    distance[child_node] = parent_distance + child_distance;
                    pq.push({distance[child_node], child_node});
                }
            }
        }
    }

    int networkDelayTime(vector<vector<int>>& times, int n, int k) 
    {
        for(auto v : times)
        {
            int a=v[0], b=v[1], c=v[2];
            adjacency_list[a].push_back({b, c});
        }
        for(int i=1; i<=n; i++)
            distance[i] = INT_MAX;
        dijkstra(k);
        int ans = -1;
        for(int i=1; i<=n; i++)
        {
            if(distance[i]==INT_MAX) return -1;
            ans = max(distance[i], ans);
        }
        return ans;
    }
};
*/