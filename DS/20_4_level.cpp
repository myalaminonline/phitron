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

void printLevel(Node* root, int x){
    if(root == NULL) return;
    if(x == 0){
        cout << root->val << " ";
        return;
    }
    printLevel(root->left, x-1);
    printLevel(root->right, x-1);
}

int height(Node* root){
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL) return 1;
    return 1 + max(height(root->left), height(root->right));
}

int main(){
    
    // input
    Node* root = input();
    int x; cin >> x;

    // process
    bool valid= (x >= 0 && x < height(root));

    // output
    if(valid){
        printLevel(root, x);
        cout << endl;
    } else {
        cout << "Invalid" << endl;
    }

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// https://www.hackerrank.com/contests/final-exam-a-basic-data-structure-a-batch-09/challenges/level-nodes-2/problem?isFullScreen=true
/*
Problem Statement

You will be given a binary tree as input in level order. Also you will be given a level . You need to print all the node's values in that level from left to right. Assume that level starts from .

For example:

image

If , then the output for the above tree will be: 40 50 60

Note: If the level  is not a valid level, the print "Invalid".

Input Format

Input will contain the binary tree in level order.  means there is no node available.
Constraints

 Maximum number of nodes 
 Node's value 
Output Format

Output all the node's values in level .
Sample Input 0

10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
0
Sample Output 0

10
Sample Input 1

10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
1
Sample Output 1

20 30
Sample Input 2

10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
2
Sample Output 2

40 50 60
Sample Input 3

10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
3
Sample Output 3

Invalid
*/