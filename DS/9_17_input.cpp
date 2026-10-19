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
    newNode->previous = tail;
    tail->next = newNode;
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
    newNode->next = temporary->next;
    newNode->previous = temporary;
    temporary->next->previous = newNode;
    temporary->next = newNode;
}

void deleteAtHead(Node* &head, Node* &tail){
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    if(head == NULL){
        tail = NULL;
        return;
    }
    head->previous = NULL;
}

void deleteAtTail(Node* &head, Node* &tail){
    Node* deleteNode = tail;
    tail = tail->previous;
    delete deleteNode;
    if(tail == NULL){
        head = NULL;
        return;
    }
    tail->next = NULL;
}

void deleteAtPosition(Node* &head, int position, Node* &tail){
    if(position == 0){
        deleteAtHead(head, tail);
        return;
    }
    Node* temporary = head;
    for(int i=1; i<position; i++){
        temporary = temporary->next;
    }
    Node* deleteNode = temporary->next;
    temporary->next = temporary->next->next;
    temporary->next->previous = temporary;
    delete deleteNode;
}


int main(){

    // Node* head = new Node(10);
    // Node* a = new Node(20);
    // Node* tail = new Node(30);
    
    // head->next = a;
    // a->previous = head;
    // a->next = tail;
    // tail->previous = a;

    Node* head = NULL;
    Node* tail = NULL;

    // input from user
    // int value;
    // while(true){
    //     cin >> value;
    //     if(value == -1){
    //         break;
    //     }
    //     insertAtTail(head, value, tail);
    // }

    // input from user
    int value;
    while(cin >> value){
        insertAtTail(head, value, tail);
    }

    cout << "Linked List:" << endl;
    printForward(head);
    printBackward(tail);

    // cout << endl << endl << "insertAtHead:" << endl;
    // insertAtHead(head, 5, tail);
    // insertAtHead(head, 1, tail);
    // printForward(head);
    // printBackward(tail);

    // cout << endl << endl << "insertAtTail:" << endl;
    // insertAtTail(head, 40, tail);
    // insertAtTail(head, 50, tail);
    // printForward(head);
    // printBackward(tail);

    // cout << endl << endl << "insertAtPosition:" << endl;
    // insertAtPosition(head, 4, 25, tail);
    // insertAtPosition(head, 6, 35, tail);
    // printForward(head);
    // printBackward(tail);

    // cout << endl << endl << "deleteAtHead:" << endl;
    // deleteAtHead(head, tail);
    // printForward(head);
    // printBackward(tail);

    // cout << endl << endl << "deleteAtTail:" << endl;
    // deleteAtTail(head, tail);
    // printForward(head);
    // printBackward(tail);

    // cout << endl << endl << "deleteAtPosition:" << endl;
    // deleteAtPosition(head, 3, tail);
    // printForward(head);
    // printBackward(tail);    
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
