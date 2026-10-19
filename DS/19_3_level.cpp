// https://www.codingninjas.com/studio/problems/node-level_920383
/*
int nodeLevel(TreeNode<int>* root, int searchedValue)
{
    queue<pair<TreeNode<int>*,int>> q;
    if(root) q.push({root,1});

    while(!q.empty()){

        // pop
        pair<TreeNode<int>*,int> f=q.front();
        q.pop();
        TreeNode<int>* node=f.first;
        int level=f.second;

        // work
        if(node->val==searchedValue) return level;

        // push
        if(node->left) q.push({node->left, level+1});
        if(node->right) q.push({node->right, level+1});
    }
}
*/