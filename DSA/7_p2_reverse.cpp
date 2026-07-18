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
    
    int val;
    while(true){
        cin >> val;
        if(val == -1){
            break;
        }
        Node* new_node = new Node(val);
        if(head == NULL){
            head = new_node;
            tail = new_node;
        } else {
            tail->next = new_node;
            tail = new_node;
        }
    }

    print_reverse(head);
    cout << endl;    
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// Take a singly linked list as input and print the reverse of the linked list.

// Sample Input
// Sample Output
// 5 4 8 6 2 1 -1
// 1 2 6 8 4 5


// 1 2 3 4 -1
// 4 3 2 1

