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

void leftOuter(Node* root){
    if(root == NULL) return;

    if(root->left)
        leftOuter(root->left);
    else if(root->right)
        leftOuter(root->right);

    cout << root->val << " ";
}

void rightOuter(Node* root){
    if(root == NULL) return;

    cout << root->val << " ";

    if(root->right)
        rightOuter(root->right);
    else if(root->left)
        rightOuter(root->left);
}

void printOuter(Node* root){
    if(root == NULL) return;

    leftOuter(root->left);
    cout << root->val << " ";
    rightOuter(root->right);
}

int main(){
    
    // input
    Node* root = input();

    // output
    printOuter(root);
    cout << endl;    
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// https://www.hackerrank.com/contests/final-exam-a-basic-data-structure-a-batch-09/challenges/print-outer-tree/problem?isFullScreen=true
/*
Problem Statement

You will be given a binary tree as input in level order. You need to print the outer side of the binary tree. See the sample input output for more clarifications. You need to print from the left most leaf node to right most leaf node.

For example:

image

The output for the above tree will be: 90 40 20 10 30 50 60

Input Format

Input will contain the binary tree in level order.  means there is no node available.
Constraints

 Maximum number of nodes 
 Node's value 
Output Format

Output the left most leaf node to right most leaf node.
Sample Input 0

10
20 30
40 70 -1 50
90 110 -1 -1 80 60
-1 -1 -1 -1 100 -1 -1 -1
-1 -1
Sample Output 0

90 40 20 10 30 50 60 
Explanation 0

This test case was explained in the question.
Sample Input 1

10
20 30
-1 40 70 50
60 90 -1 -1 80 -1
-1 -1 -1 -1 100 110
-1 -1 -1 -1
Sample Output 1

60 40 20 10 30 50 80 110 
Explanation 1

Outer part of the binary tree - 
image

Sample Input 2

10
-1 20
-1 50
80 -1
-1 -1
Sample Output 2

10 20 50 80
Explanation 2

Outer part of the binary tree - 
image

Sample Input 3

10
20 -1
-1 50
80 -1
-1 -1
Sample Output 3

80 50 20 10 
Explanation 3

Outer part of the binary tree - 
image
*/