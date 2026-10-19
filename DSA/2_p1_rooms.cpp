/*
class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {

        int n=rooms.size();
        bool visited[n];
        memset(visited, false, sizeof(visited));

        queue<int> q;
        q.push(0);
        visited[0]=true;

        while(!q.empty()){
            int current=q.front();
            q.pop();

            cout<<current<<" ";

            for(auto i:rooms[current]){
                if(!visited[i]){
                    q.push(i);
                    visited[i]=true;
                }
            }
        }

        for(auto i:visited){
            if(!i) return false;
        }
        return true;
    }
};
*/

// +------------------+
// | alaminonline.com |
// +------------------+
// https://leetcode.com/problems/keys-and-rooms