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

void insert_at_tail(Node* &head, int val){
    Node* new_node = new Node(val);
    if(head == NULL){
        head = new_node;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
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

int main(){
    
    Node* head = new Node(40);
    Node* a = new Node(20);
    Node* b = new Node(30);
    
    head->next = a;
    a->next = b;

    insert_at_head(head, 100);
    insert_at_head(head, 200);
    insert_at_head(head, 300);
    print_linked_list(head);

    insert_at_tail(head, 400);
    insert_at_tail(head, 500);
    insert_at_tail(head, 600);
    print_linked_list(head);

    insert_at_position(head, 2, 700);
    print_linked_list(head);

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
