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

int main(){

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);
    
    head->next = a;
    a->previous = head;
    a->next = tail;
    tail->previous = a;
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
