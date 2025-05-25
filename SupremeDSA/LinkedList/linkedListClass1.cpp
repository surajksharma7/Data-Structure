#include<iostream>
using namespace std;

class node{
public:
    int data;
    node * next;

    node(int value){{
        this->data = value;
        this->next = NULL;
    }}
};

int main(){
    node*first = new node();
}