#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* left;
        Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input(){
    int val; cin>>val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty()){
        Node* f = q.front();
        q.pop();
        int l; cin>>l;
        if(l != -1){
            f->left = new Node(l);
            q.push(f->left);
        }
        int r; cin>>r;
        if(r != -1){
            f->right = new Node(r);
            q.push(f->right);
        }
    }
    return root;
}

int sumWithoutLeaf(Node* root){
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL) return 0;
    return root->val + sumWithoutLeaf(root->left) + sumWithoutLeaf(root->right);
}

int main(){

    Node* root = input();
    cout << sumWithoutLeaf(root) << endl;
     
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// https://www.hackerrank.com/contests/final-exam-a-basic-data-structure-a-batch-09/challenges/sum-without-leaf/problem
/*
Problem Statement

You will be given a binary tree as input in level order. You need to output the sum of all node's values in that tree except the leaf nodes.

For example:

image

The output for the above tree will be: 60

Input Format

Input will contain the binary tree in level order.  means there is no node available.
Constraints

 Maximum number of nodes 
 Node's value 
Output Format

Output the total sum of that tree except the leaf nodes.
Sample Input 0

10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
Sample Output 0

60Problem Statement

You will be given a binary tree as input in level order. You need to output the sum of all node's values in that tree except the leaf nodes.

For example:

image

The output for the above tree will be: 60

Input Format

Input will contain the binary tree in level order.  means there is no node available.
Constraints

 Maximum number of nodes 
 Node's value 
Output Format

Output the total sum of that tree except the leaf nodes.
Sample Input 0

10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
Sample Output 0

60
*/