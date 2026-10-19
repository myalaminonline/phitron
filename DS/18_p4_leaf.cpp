// https://www.naukri.com/code360/problems/count-leaf-nodes_893055?leftPanelTabValue=SUBMISSION
/*
int leaf(BinaryTreeNode<int> *root){
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL) return 1;
    return leaf(root->left)+leaf(root->right);
}
int noOfLeafNodes(BinaryTreeNode<int> *root){
    return leaf(root);
}
*/