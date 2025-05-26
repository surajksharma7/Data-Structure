#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node*next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

void printLinkedlist(Node * &head){
    Node * temp = head;
    while(temp!= NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
    cout << endl;
}
Node * insertAtHead(int value, Node * &head, Node * &tail){
    // linkedlist is empty
    // it means we are creating first node of the linked list
    // step1: create a new node 
    if(head == NULL && tail == NULL){
        Node * newnode = new Node(value);
            head = newnode;
            tail = newnode;
    }
    else{
        Node * newnode = new Node(value);
        newnode->next = head;
        head = newnode;
    }

    return head;
}

Node * insertAtTail(int value, Node*&head, Node *&tail){
    
    if(head == NULL && tail == NULL){
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else{
        Node * newnode = new Node(value);
        tail->next = newnode;
        tail = newnode;
    }
    return head;
}
int main(){
    Node * head = NULL;
    Node * tail = NULL;

    insertAtHead(10,head, tail);
    insertAtHead(20,head, tail);
    insertAtTail(30, head, tail);
    insertAtTail(40, head, tail);
    printLinkedlist(head);
}

