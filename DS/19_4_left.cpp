// https://www.codingninjas.com/studio/problems/left-view-of-a-binary-tree_920519
// http://naukri.com/code360/problems/left-view-of-a-binary-tree_920519?leftPanelTabValue=SUBMISSION
/*
#include <bits/stdc++.h> 

vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int> v;
    bool freq[3005]={false};

    queue<pair<TreeNode<int>*,int>> q;
    if(root) q.push({root,1});

    while(!q.empty()){
        
        // pop
        pair<TreeNode<int>*,int> f=q.front();
        q.pop();
        TreeNode<int>* node=f.first;
        int level=f.second;

        // work
        if(!freq[level]){
            v.push_back(node->data);
            freq[level]=true;
        }
        
        // push
        if(node->left) q.push({node->left, level+1});
        if(node->right) q.push({node->right, level+1});
    }
    
    return v;
}
*/