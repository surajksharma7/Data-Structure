#include<iostream>
using namespace std;

class Node{

    public:
        int data;
        Node*next;
        Node*prev;

        Node(int data){
            this->data = data;
            this->next = NULL;
            this->prev = NULL;
        }
};

int getLenght(Node*&head){
    int count = 0;
    Node * temp = head;

    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
void insertAthead(int value, Node*&head, Node*&tail){
    Node * newnode = new Node(value);

    if(head == NULL && tail == NULL){
        head = newnode;
        tail = newnode;
    }
    else{
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
        newnode->prev = NULL;
    }
}

void insertAtTail(int value, Node*&head, Node*&tail){
    Node *newnode = new Node(value);
    if(head == NULL && tail == NULL){
        head = newnode;
        tail = newnode;
    }
    else{
        newnode->prev = tail;
        tail->next = newnode;
        tail = newnode;
    }
}
void printLinkedList(Node*&head){
    Node*temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" ;
    cout << endl;
}

void printRev(Node*&tail){
    Node * temp = tail;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->prev;
    }
    cout << "NULL";
}   
void insertAtPostition(int data, int position,Node*&head, Node*&tail){
    int n = getLenght(head);
    if (position <= 0 || position > n + 1) {
        cout << "Invalid position!" << endl;
        return;
    }
    if(position == 1){
        insertAthead(data, head, tail);
    }
    else if(position == n+1){
        insertAtTail(data, head, tail);
    }
    else{
        Node*newnode = new Node(data);
        Node*temp = head;
        for(int i = 0; i<position-2;i++){
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next->prev = newnode;
        newnode->prev = temp;
        temp->next = newnode;
    }
}

bool searchingInLL(Node*&head, int target){
    Node*temp = head;
    while(temp != NULL){
        if(temp->data == target){
        return true;
        }
        temp = temp->next;
    }
    return false;
}

void deleteLL(int position, Node*&head, Node*&tail){
    int n = getLenght(head);
    if(head == NULL && tail == NULL){
        cout << "noting to delete" << endl;
    }
    else if(head == tail){
        Node*temp = head;
        head->next = NULL;
        tail->next = NULL;
        delete temp;
    }
    else if(position == 1){
        Node*temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
    }

    if (position == n) {
        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        temp->prev = NULL;
        delete temp;
        return;
    }
    else{
        Node*temp= head;
        int count = 0;
        for(int i =0;i<position-2;i++){
            count++;
            temp = temp->next;
        }

        Node*current = temp->next;
        Node*forward = current->next;
        temp->next = current->next;
        forward->prev = current->prev;
        current->next = NULL;
        current->prev = NULL;
        delete current;
    }
}

int main(){
    Node*head = NULL;
    Node*tail = NULL;
    insertAthead(10, head, tail); 
    insertAthead(20, head, tail);
    insertAthead(30, head, tail);
    printLinkedList(head);
    insertAtTail(40, head, tail);
    printLinkedList(head);
    printRev(tail);
    cout << endl;
    insertAtPostition(420,2, head, tail);
    cout << searchingInLL(head, 10) << endl;
    printLinkedList(head);
    return 0;
}