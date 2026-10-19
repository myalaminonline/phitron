// 1 ms solution using DFS and direction vector
/*
class Solution {
public:
    vector<pair<int,int>> dir = {{0,-1},{0,1},{-1,0},{1,0}};
    void dfs(vector<vector<int>>& image, int sr, int sc, int target, int color){
        if(sr<0 || sr>=image.size() || sc<0 || sc>= image[0].size()) return;
        if(image[sr][sc]!=target || image[sr][sc]==color) return;
        image[sr][sc] = color;
        for (auto d : dir) dfs(image, sr + d.first, sc + d.second, target, color);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color){
        int target = image[sr][sc];
        dfs(image, sr, sc, target, color);
        return image;
    }
};
*/

// 0 ms solution using DFS
/*
class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int target, int color){
        if(sr<0 || sr>=image.size() || sc<0 || sc>= image[0].size()) return;
        if(image[sr][sc]!=target || image[sr][sc]==color) return;
        image[sr][sc] = color;
        dfs(image, sr-1, sc, target, color);
        dfs(image, sr+1, sc, target, color);
        dfs(image, sr, sc-1, target, color);
        dfs(image, sr, sc+1, target, color);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color){
        int target = image[sr][sc];
        dfs(image, sr, sc, target, color);
        return image;
    }
};
*/

// +------------------+
// | alaminonline.com |
// +------------------+
// https://leetcode.com/problems/flood-fill/submissions/2176092503/