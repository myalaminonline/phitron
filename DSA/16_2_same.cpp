#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Stack{
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int count = 0;
    void push(int val){
        count++;
        Node* new_node = new Node(val);
        if(head == NULL){
            head = new_node;
            tail = new_node;
            return;
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }
    void pop(){
        count--;
        Node* delete_node = tail;
        tail = tail->prev;
        delete delete_node;
        if(tail == NULL){
            head = NULL;
            return;
        }
        tail->next = NULL;
    }
    int top(){
        return tail->val;
    }
    int size(){
        return count;
    }
    bool empty(){
        return head == NULL;
    }
};

class Queue{
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int count = 0;
    void push(int val){
        count++;
        Node* newNode = new Node(val);
        if (head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    void pop(){
        count--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL){
            tail = NULL;
            return;
        }
        head->prev = NULL;
    }
    int front(){
        return head->val;
    }
    int back(){
        return tail->val;
    }
    int size(){
        return count;
    }
    bool empty(){
        return head == NULL;
    }
};

int main(){

    // input
    int n, m;
    cin >> n >> m;
    Stack s;
    Queue q;    
    for(int i=0; i<n; i++){
        int val; cin >> val;
        s.push(val);
    }
    for(int i=0; i<m; i++){
        int val; cin >> val;
        q.push(val);
    }

    // process
    bool flag = true;
    if (n != m) flag = false;
    else{
        while(!s.empty() && !q.empty()){
            if(s.top() != q.front()){
                flag = false;
                break;
            }
            s.pop();
            q.pop();
        }
    }

    // output
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-09/challenges/same-or-not-4/copy-from/1412356144?isFullScreen=true
/*
Problem Statement

There is a list of N values that were inserted into a stack and a list of M values that were inserted into a queue. You need to determine whether the stack and queue are the same or not based on the order in which the elements are removed.

Note: You cannot use any STL here. You need to implement the stack and queue by yourself. You can use linked list or array to implement the stack and queue as you want.

Input Format

First line will contain N and M.
Second line will contain stack A with N values.
Third line will contain queue B with M values.
Constraints
1. 1 <= N,M <= 10^6
2. 0 <= Values <= 1000

Output Format

Output YES if they were same, otherwise NO.
Sample Input 0

5 5
10 20 30 40 50
50 40 30 20 10
Sample Output 0

YES
Sample Input 1

4 4
10 20 30 40
10 20 30 40
Sample Output 1

NO
Sample Input 2

5 4
1 2 3 4 5
5 4 3 2
Sample Output 2

NO
*/