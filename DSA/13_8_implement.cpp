#include <bits/stdc++.h>
using namespace std;

class Node{

    public:
        int val;
        Node* next;
        Node* prev;

        Node(int val){
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};

class Stack{

    public:
        Node* head = NULL;
        Node* tail = NULL;
        int count = 0;

        void push(int val){
            count++;
            Node* new_node = new Node(val);
            if(head == NULL){
                head = new_node;
                tail = new_node;
                return;
            }
            tail->next = new_node;
            new_node->prev = tail;
            tail = new_node;
        }

        void pop(){
            count--;
            Node* delete_node = tail;
            tail = tail->prev;
            delete delete_node;
            if(tail == NULL){
                head = NULL;
                return;
            }
            tail->next = NULL;
        }

        int top(){
            return tail->val;
        }

        int size(){
            return count;
        }

        bool empty(){
            return head == NULL;
        }
};

int main(){

    // input
    int n; cin>>n;
    Stack s;
    for(int i=0; i<n; i++){
        int val; cin>>val;
        s.push(val);
    }

    // output
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
