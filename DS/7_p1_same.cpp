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

int main(){
    
    Node* head1 = NULL;
    Node* tail1 = NULL;
    int val;
    while(true){
        cin >> val;
        if(val == -1){
            break;
        }
        Node* new_node = new Node(val);
        if(head1 == NULL){
            head1 = new_node;
            tail1 = new_node;
        } else {
            tail1->next = new_node;
            tail1 = new_node;
        }
    }

    Node* head2 = NULL;
    Node* tail2 = NULL;
    while(true){
        cin >> val;
        if(val == -1){
            break;
        }
        Node* new_node = new Node(val);
        if(head2 == NULL){
            head2 = new_node;
            tail2 = new_node;
        } else {
            tail2->next = new_node;
            tail2 = new_node;
        }
    }

    int count1 = 0;
    Node* temp1 = head1;
    while(temp1 != NULL){
        count1++;
        temp1 = temp1->next;
    }

    int count2 = 0;
    Node* temp2 = head2;
    while(temp2 != NULL){
        count2++;
        temp2 = temp2->next;
    }

    if(count1 == count2){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// Question: Take two singly linked lists as input and check if their sizes are same or not.

// Sample Input
// Sample Output
// 2 1 5 3 4 9 -1
// 1 2 3 4 5 6 -1
// YES
// 5 1 4 5 -1
// 5 1 4 -1
// NO

