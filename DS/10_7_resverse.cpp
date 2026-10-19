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

void insert_at_head(Node* &head, int val){
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

// void insert_at_tail(Node* &head, int val){
//     Node* new_node = new Node(val);
//     if(head == NULL){
//         head = new_node;
//         return;
//     }
//     Node* temp = head;
//     while(temp->next != NULL){
//         temp = temp->next;
//     }
//     temp->next = new_node;
// }

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


void insert_at_position(Node* &head, int pos, int val){
    if(pos == 0){
        insert_at_head(head, val);
        return;
    }
    Node* new_node = new Node(val);
    Node* temp = head;
    for(int i=1; i<pos; i++){
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

void print_linked_list(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void count_linked_list(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    cout << count << endl;
}

void recursion(int i, int n){

    // // base case
    // if(i > n){
    //     return;
    // }
    // cout << i << " ";
    // recursion(i+1, n);

    // reverse case
    if(i > n){
        return;
    }
    recursion(i+1, n);
    cout << i << " ";
}

void print_reverse(Node* head){
    if(head == NULL){
        return;
    }
    print_reverse(head->next);
    cout << head->val << " ";
}


int main(){
    
    Node* head = NULL;
    Node* tail = NULL;

    // int val;
    // while(cin >> val){
    //     insert_at_tail(head, tail, val);
    // }

    int val;
    while(true){
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head, tail, val);
    }

    print_linked_list(head);

    // int n=5;
    // recursion(1,n);

    print_reverse(head);

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
