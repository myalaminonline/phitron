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

void preorder(Node* root){
    if(root == NULL){
        return;
    }
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

void postorder(Node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}

void levelorder(Node* root){
    if(root == NULL){
        cout << "No Tree" << endl;
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* f = q.front();
        q.pop();
        cout << f->val << " ";
        if(f->left){
            q.push(f->left);
        }
        if(f->right){
            q.push(f->right);
        }
    }
    cout << endl;
}

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

int count(Node* root){
    if(root == NULL){
        return 0;
    }
    return 1 + count(root->left) + count(root->right);
}


int main(){
    
    /*
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);

    root->left=a;
    root->right=b;
    a->left=c;
    b->left=d;
    b->right=e;

    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    levelorder(root);
    cout << endl;
    */
   
    // 10 20 30 40 -1 50 60 -1 -1 -1 -1 -1 -1
    Node* root = input();
    levelorder(root);
    cout << endl;

    cout<<"Count: " << count(root) << endl;
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
