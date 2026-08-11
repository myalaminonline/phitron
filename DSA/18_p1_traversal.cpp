// https://www.naukri.com/code360/problems/level-order-traversal_796002?leftPanelTabValue=PROBLEM
/*
vector<int> getLevelOrder(BinaryTreeNode<int>* root){
    queue<BinaryTreeNode<int>*> q;
    if(root) q.push(root);
    while(!q.empty()){
        BinaryTreeNode<int>* f = q.front();
        q.pop();
        cout << f->val << " ";
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
}
*/