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

int getDepth(Node* root){
    if(root == NULL) return 0;
    return 1 + max(getDepth(root->left), getDepth(root->right));
}

int countNodes(Node* root){
    if(root == NULL) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

bool isPerfect(Node* root){
    if(root == NULL) return true;
    int depth = getDepth(root);
    int totalNodes = countNodes(root);
    return totalNodes == (pow(2, depth) - 1);
}

int main(){
    
    // input
    Node* root = input();

    // process
    bool ans= isPerfect(root);

    // output
    if(ans==true){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// https://www.hackerrank.com/contests/final-exam-a-basic-data-structure-a-batch-09/challenges/perfect-binary-tree/problem?isFullScreen=true
/*
Problem Statement

You will be given a binary tree as input in level order. You need to tell if the binary tree is perfect or not. A binary tree is called perfect if all leaf nodes are at the maximum depth of the tree, and the tree is completely filled with no gaps.

Here is an example of perfect binary tree:

image

Also there is formula available to tell if a binary tree is perfect or not. The formula is :

Total number of nodes = -1
Note: Here depth is counted from . In the above image maximum depth is , so total number of nodes are . So there should be  nodes to call it a perfect binary tree.

Image Source: OpenGenus Iq

Input Format

Input will contain the binary tree in level order.  means there is no node available.
Constraints

 Maximum number of nodes 
 Node's value 
Output Format

Output  if the tree is perfect,  otherwise.
Sample Input 0

1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
Sample Output 0

YES
Sample Input 1

10 20 30 40 -1 60 -1 -1 -1 -1 -1
Sample Output 1

NO
Sample Input 2

10 20 -1 -1 -1
Sample Output 2

NO
Sample Input 3

10 20 30 40 50 60 70 -1 -1 -1 -1 -1 -1 -1 -1
Sample Output 3

YES
*/