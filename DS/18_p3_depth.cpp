// https://leetcode.com/problems/maximum-depth-of-binary-tree/submissions/2101071240/
/*
class Solution {
public:
    int depth(TreeNode* root){
        if(root==NULL) return 0;
        return 1 + max(depth(root->left), depth(root->right));
    }
    int maxDepth(TreeNode* root) {
        return depth(root);
    }
};
*/