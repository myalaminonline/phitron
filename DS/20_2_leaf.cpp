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

void leafNodes(Node* root, vector<int> &v){
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL){
        v.push_back(root->val);
        return;
    }
    leafNodes(root->left, v);
    leafNodes(root->right, v);
}

int main(){
    
    // input
    Node* root = input();

    // process
    vector<int> v;
    leafNodes(root, v);
    sort(v.begin(), v.end(), greater<int>());

    // output
    for(int val : v){
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// https://www.hackerrank.com/contests/final-exam-a-basic-data-structure-a-batch-09/challenges/leaf-nodes-1/problem?isFullScreen=true
/*
Problem Statement

You will be given a binary tree as input in level order. You need to print the values of leaf nodes in descending order.

For example:

image

The output for the above tree will be: 60 50 40

Input Format

Input will contain the binary tree in level order.  means there is no node available.
Constraints

 Maximum number of nodes 
 Node's value 
Output Format

Output the values of leaf nodes in descending order.
Sample Input 0

10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
Sample Output 0

60 50 40
*/