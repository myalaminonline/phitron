// 62ms
// https://leetcode.com/problems/minimum-number-of-vertices-to-reach-all-nodes/submissions/2181560496/
/*
class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        bool parent[n];
        vector<int> ans;
        memset(parent, false, sizeof(parent));
        for(auto v : edges){
            parent[v[1]] = true;
        }
        for(int i=0; i<n; i++){
            if(!parent[i]){
                ans.push_back(i);
            }  
        }
        return ans;
    }
};
*/