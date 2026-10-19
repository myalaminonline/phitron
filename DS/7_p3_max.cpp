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

void print_maximum(Node* head){
    if(head == NULL){
        return;
    }
    int max_val = head->val;
    Node* temp = head;
    while(temp != NULL){
        if(temp->val > max_val){
            max_val = temp->val;
        }
        temp = temp->next;
    }
    cout << max_val << endl;    
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

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(true){
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head, tail, val);
    }
    print_maximum(head);
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// Take a singly linked list as input, then print the maximum value of them.



// Sample Input
// Sample Output
// 2 4 1 3 5 4 2 5 -1
// 5
// 5 4 1 2 5 6 8 4 1 3 -1
// 8

