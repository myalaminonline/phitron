// https://leetcode.com/problems/sum-of-left-leaves/submissions/2101061571/
/*
class Solution {
public:
    int ans=0;
    void sum(TreeNode* root){
        if(root==NULL) return;
        if(root->left){  // left child
            if(root->left->left==NULL && root->left->right==NULL)  // leaf
                ans+=root->left->val;
        }
        sum(root->left);
        sum(root->right);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        sum(root);
        return ans;  
    }
};
*/