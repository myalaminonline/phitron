#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        string val;
        Node* next;
        Node* prev;
    Node(string val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_left_to_right(Node* head){
    cout << "L -> ";
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_right_to_left(Node* tail){
    cout << "R -> ";
    Node* temp = tail;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void insert_at_head(Node* &head, Node* &tail, string val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_tail(Node* &head, Node* &tail, string val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_at_position(Node* &head, Node* &tail, int pos, string val){
    if(pos == 0){
        insert_at_head(head, tail, val);
        return;
    }
    Node* newNode = new Node(val);
    Node* temp = head;
    for(int i=0; i<pos-1; i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    if(temp->next != NULL){
        temp->next->prev = newNode;
    }
    temp->next = newNode;
}

void delete_at_head(Node* &head, Node* &tail){
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    if(head == NULL){
        tail = NULL;
        return;
    }
    head->prev = NULL;
}

void delete_at_tail(Node* &head, Node* &tail){
    Node* deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    if(tail == NULL){
        head = NULL;
        return;
    }
    tail->next = NULL;
}

void delete_at_position(Node* &head, Node* &tail, int pos){
    if(pos == 0){
        delete_at_head(head, tail);
        return;
    }
    Node* temp = head;
    for(int i=0; i<pos-1; i++){
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    if(temp->next != NULL){
        temp->next->prev = temp;
    }
    delete deleteNode;
}

void visit(Node* &head, Node* &tail, Node* &currentPosition, string val){
    Node* temp = head;
    while(temp != NULL){
        if(temp->val == val){
            cout << temp->val <<endl;
            currentPosition = temp;
            return;
        }
        temp = temp->next;
    }
    cout << "Not Available" << endl;
}

void next(Node* &head, Node* &tail, Node* &currentPosition){
    if(currentPosition->next == NULL){
        cout << "Not Available" << endl;
        return;
    }
    currentPosition = currentPosition->next;
    cout << currentPosition->val << endl;
}

void prev(Node* &head, Node* &tail, Node* &currentPosition){
    if(currentPosition->prev == NULL){
        cout << "Not Available" << endl;
        return;
    }
    currentPosition = currentPosition->prev;
    cout << currentPosition->val << endl;
}

int main(){
    
    // doubly linked list
    Node* head = NULL;
    Node* tail = NULL;
    Node* currentPosition = NULL;


    // input
    string val;
    while(cin >> val){
        if(val == "end"){
            break;
        }
        insert_at_tail(head, tail, val);
    }

    // queries
    int q; cin>>q;
    while(q--){
        string command; cin>>command;
        if(command == "visit"){
            cin >> val;
            visit(head, tail, currentPosition, val);
        } else if(command == "next"){
            next(head, tail, currentPosition);
        } else if(command == "prev"){
            prev(head, tail, currentPosition);
        }
    }
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-09/challenges/browser-history-1/problem?isFullScreen=true
/*
Problem Statement

You are given a doubly linked list of unique string values. These strings refer to web addresses without any spaces. You will be given Q queries. In each query you will be given some commands. Type of commands are -

visit address - You need to go to that address from where you are in that list and print that address if it is in the list. Otherwise print "Not Available".
next - You need to go to the next address from where you are in that list and print that address if it is in the list. Otherwise print "Not Available".
prev - You need to go to the previous address from where you are in that list and print that address if it is in the list. Otherwise print "Not Available".
One more thing, if the address isn't available make sure you don't move from your current position. You are at the head initially.

Note: You can use Singly/Doubly Linked List or STL List to solve this problem.

Input Format

First line will contain the values of the doubly linked list, and will terminate with the string "end".
Second line will contain Q.
Next Q lines will contain the commands. It is guranteed that you will get "visit address" command at first which will contain a valid address. It will not contain valid address everytime!
Constraints

1 <= N <= 1000; Here N is the maximum number of nodes of the linked list.
1 <= Q <= 1000;
1 <= |Address| <= 100; Here |Address| is the length of the string address.
Output Format

For each query output as asked.
Sample Input 0

facebook google phitron youtube twitter end
12
visit phitron
prev
prev
prev
prev
next
visit twitter
next
next
prev
visit django
prev
Sample Output 0

phitron
google
facebook
Not Available
Not Available
google
twitter
Not Available
Not Available
youtube
Not Available
phitron
Sample Input 1

a b c d e f g h i j k l m n o p q r s t u v w x y z end
7
visit s
next
visit zz
next
visit z
next
prev
Sample Output 1

s
t
Not Available
u
z
Not Available
y
*/