// https://leetcode.com/problems/keys-and-rooms
/*
class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int src=0;

        queue<int> q;
        q.push(src);

        bool visits[1005];
        memset(visits,false,sizeof(visits));
        visits[src]=true;

        while(!q.empty()){
            int current=q.front();
            q.pop();

            for(int node:rooms[current]){
                if(!visits[node]){
                    q.push(node);
                    visits[node]=true;
                }
            }
        }

        for(int i=0; i<rooms.size(); i++){
            if(!visits[i]) return false;
        }
        return true;
    }
};
*/