#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        Node* previous;
        int value;
        Node* next;

    Node(int value){
        this->previous = NULL;
        this->value = value;
        this->next = NULL;
    }
};

void printForward(Node* head){
    Node* temporary = head;
    while(temporary != NULL){
        cout << temporary->value << " ";
        temporary = temporary->next;
    }
    cout << endl;
}

void printBackward(Node* tail){
    Node* temporary = tail;
    while(temporary != NULL){
        cout << temporary->value << " ";
        temporary = temporary->previous;
    }
}

void insertAtHead(Node* &head, int value, Node* &tail){
    Node* newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->previous = newNode;
    head = newNode;
}

void insertAtTail(Node* &head, int value, Node* &tail){
    Node* newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->previous = tail;
    tail = newNode;
}

void insertAtPosition(Node* &head, int position, int value, Node* &tail){
    if(position == 0){
        insertAtHead(head, value, tail);
        return;
    }
    Node* newNode = new Node(value);
    Node* temporary = head;
    for(int i=1; i<position; i++){
        temporary = temporary->next;
    }
    newNode->previous = temporary;
    newNode->next = temporary->next;
    temporary->next->previous = newNode;
    temporary->next = newNode;
}


int main(){

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);
    
    head->next = a;
    a->previous = head;
    a->next = tail;
    tail->previous = a;

    insertAtHead(head, 5, tail);
    insertAtHead(head, 1, tail);

    insertAtTail(head, 40, tail);
    insertAtTail(head, 50, tail);

    insertAtPosition(head, 4, 25, tail);
    insertAtPosition(head, 6, 35, tail);

    printForward(head);
    printBackward(tail);
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
