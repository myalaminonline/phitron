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

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void remove_duplicate(Node* head){
    Node* current_node = head;
    while(current_node != NULL){
        Node* running_node = current_node;
        while(running_node->next != NULL){
            if(running_node->next->val == current_node->val){
                Node* duplicate_node = running_node->next;
                running_node->next = running_node->next->next;
                delete duplicate_node;
            } else {
                running_node = running_node->next;
            }
        }
        current_node = current_node->next;
    }
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

    remove_duplicate(head);
    print(head);

    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// Problem Statement

// You will be given a singly linked list of integer values as input. You need to remove duplicate values from the linked list and finally print the linked list.

// The process is, for each node N, traverse from that node and delete all nodes where the values are same with N.

// Note: You must use singly linked list, otherwise you will not get marks.

// Input Format

// First line will contain the values of the singly linked list, and will terminate with -1.
// Constraints

// 1 <= N <= 1000; Here N is the maximum number of nodes of the linked list.
// 0 <= V <= 1000; Here V is the value of each node.
// Output Format

// Output the final linked list where there will be no duplicate values.
// Sample Input 0

// 1 2 3 4 5 -1
// Sample Output 0

// 1 2 3 4 5
// Sample Input 1

// 1 2 4 2 3 5 1 4 5 2 6 1 -1
// Sample Output 1

// 1 2 4 3 5 6
// Sample Input 2

// 5 5 1 1 2 4 2 4 1 3 5 0 -1
// Sample Output 2

// 5 1 2 4 3 0
// Sample Input 3

// 10 10 10 20 20 20 10 20 -1
// Sample Output 3

// 10 20