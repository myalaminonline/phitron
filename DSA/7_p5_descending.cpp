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

void sort_descending(Node* &head){
    // using selection sort
    Node* current_node = head;
    while(current_node != NULL){
        Node* next_node = current_node->next;
        while(next_node != NULL){
            if(current_node->val < next_node->val){
                swap(current_node->val, next_node->val);
            }
            next_node = next_node->next;
        }
        current_node = current_node->next;
    }
}

int main(){
    
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(cin >> val){
        if(val == -1){
            break;
        }
        insert_at_tail(head, tail, val);
    }

    sort_descending(head);
    print_linked_list(head);

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// Take a singly linked list as input and sort it in descending order. Then print the list.


// Sample Input
// Sample Output
// 1 4 5 2 7 -1
// 7 5 4 2 1
// 20 40 30 10 50 60 -1
// 60 50 40 30 20 10

