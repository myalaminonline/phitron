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

long long int max(Node* head){
    if(head == NULL){
        return 0;
    }
    int max = head->val;
    Node* temp = head;
    while(temp != NULL){
        if(temp->val > max){
            max = temp->val;
        }
        temp = temp->next;
    }
    return max;
}

long long int min(Node* head){
    if(head == NULL){
        return 0;
    }
    int min = head->val;
    Node* temp = head;
    while(temp != NULL){
        if(temp->val < min){
            min = temp->val;
        }
        temp = temp->next;
    }
    return min;
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
    cout << max(head) - min(head)<< endl;
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// Problem Statement

// You need to take a singly linked list of integer value as input and print the difference between the maximum and minimum value of the singly linked list.

// Note: You must use singly linked list to solve this problem, otherwise you will not get marks.

// Input Format

// Input will contain the values of the singly linked list, and will terminate with -1.
// Constraints

// 1 <= N <= 10^5; Here N is the maximum number of nodes of the linked list.
// -10^9 <= V <= 10^9; Here V is the value of each node.
// Output Format

// Output the difference between the maximum and minimum value.
// Sample Input 0

// 2 4 1 5 3 6 -1
// Sample Output 0

// 5
// Sample Input 1

// 2 -1
// Sample Output 1

// 0