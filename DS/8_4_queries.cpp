#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_head(Node* &head, Node* &tail, int val){
    Node* new_node = new Node(val);
    if(head == NULL){
        head = new_node;
        tail = new_node;
        return; 
    }
    new_node->next = head;
    head = new_node;
}

void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* new_node = new Node(val);
    if(head == NULL){
        head = new_node;
        tail = new_node;
        return;
    }
    tail->next = new_node;
    tail = new_node;
}

void delete_at_position(Node* &head, Node* &tail, int pos){
    if(pos == 0){
        Node* delete_node = head;
        head = head->next;
        delete delete_node;
        if(head == NULL){
            tail = NULL;
        }
        return;
    }

    Node* temp = head;
    for(int i=1; i<=pos-1; i++){
        temp = temp->next;
    }

    Node* delete_node = temp->next;
    temp->next = temp->next->next;

    if(delete_node == tail){
        tail = temp;
    }

    delete delete_node;
}

int count(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;
    
    int q;
    cin >> q;

    while(q--){
        int x, v;
        cin >> x >> v;

        if(x == 0){
            insert_at_head(head, tail, v);
        }
        else if(x == 1){
            insert_at_tail(head, tail, v);
        } 
        else if(x == 2){
            if(v>=0 && v<count(head)){
                delete_at_position(head, tail, v);
            }
        }

        print(head);
    }
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// Problem Statement

// You have a singly linked list which is empty initially. Then you will be given Q queries. In each query you will be given two values X and V.

// If X is 0 that means you will insert the value V to the head of the linked list.
// If X is 1 then you will insert the value V to the tail of the linked list.
// If X is 2 then you will delete the value Vth index of the linked list. Assume that index starts from 0. If the index is invalid, then you shouldn't perform the deletion.
// After each query you need to print the linked list.
// Note: You must use singly linked list, otherwise you will not get marks.

// Input Format

// First line will contain Q.
// Next Q lines will contain X and V.
// Constraints

// 1 <= Q <= 1000;
// 0 <= X <= 2;
// 0 <= V <= 10^9
// Output Format

// For each query ouput the updated linked list.
// Sample Input 0

// 4
// 0 10
// 1 20
// 1 30
// 0 40
// Sample Output 0

// 10 
// 10 20 
// 10 20 30 
// 40 10 20 30 
// Sample Input 1

// 11
// 0 10
// 2 5
// 1 20
// 1 30
// 0 40
// 2 0
// 0 50
// 2 2
// 1 60
// 2 3
// 2 3
// Sample Output 1

// 10 
// 10 
// 10 20 
// 10 20 30 
// 40 10 20 30 
// 10 20 30 
// 50 10 20 30 
// 50 10 30 
// 50 10 30 60 
// 50 10 30 
// 50 10 30 
// Sample Input 2

// 10
// 1 4
// 2 1
// 0 9
// 0 10
// 2 2
// 1 5
// 2 0
// 2 1
// 2 5
// 2 2
// Sample Output 2

// 4 
// 4 
// 9 4 
// 10 9 4 
// 10 9 
// 10 9 5 
// 9 5 
// 9 
// 9 
// 9 