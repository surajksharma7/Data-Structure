#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *left;
    Node *right;
    
    Node(int value){
        this->data = value;
        left = NULL;
        right = NULL;
    }
};

Node *createTree() {
    cout << "Enter value or type -1 for null value";
    int val;
    cin >> val;
    if(val == -1){
        return 0;
    }else{
        Node *root = new Node(val);
        root->left = createTree();
        root->right = createTree();
        return root;
    }
    
};

void preOrderTraversal(Node * root){
    if(root == NULL){
        return;
    }
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}


void inOrderTraversal(Node * root){
    if(root == NULL){
        return;
    }
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

void preOrderTraversal(Node * root){
    if(root == NULL){
        return;
    }
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
    cout<< root->data << " ";
}

int main()
{

    Node *root = createTree();
    return 0;
}