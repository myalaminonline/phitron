// https://www.codingninjas.com/studio/problems/diameter-of-the-binary-tree_920552
/*
int diameter;
int height(TreeNode<int>* root){
        if(root==NULL) return 0;
        if(root->left==NULL && root->right==NULL) return 1;

        int l = height(root->left);
        int r = height(root->right);
        
        diameter=max(diameter, l+r);
        return 1+max(l,r);
    }
int diameterOfBinaryTree(TreeNode<int> *root){
	diameter=0;
    int h = height(root);
    return diameter;
}
*/