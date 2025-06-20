// traversal ->
// preorder -> N L R
// in order -> L N R 
// postOrder -> L R N 
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        this->data = val;
        left = NULL;
        right = NULL;
    }
};

Node* createTree() {
    cout << "Enter the value for node (-1 for NULL): ";
    int value;
    cin >> value;

    if (value == -1) {
        return NULL;
    } else {
        Node *root = new Node(value);
        cout << "Adding left child for " << value << endl;
        root->left = createTree();
        cout << "Adding right child for " << value << endl;
        root->right = createTree();
        return root;
    }
}
void preOrderTraversal(Node * root){
    if(root == NULL){
        return;
    }
    cout << root->data << endl;
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrdertraversal(Node*root){
    if(root == NULL){
        return;
    }
    inOrdertraversal(root->left);
    cout << root->data << endl;
    inOrdertraversal(root->right);
}

void postOrdertraversal(Node * root){
    if(root == NULL){
        return;
    }
    postOrdertraversal(root->left);
    postOrdertraversal(root->right);
    cout << root->data << endl;
}
int main() {
    Node *root = createTree();
    preOrderTraversal(root);
    postOrdertraversal(root);
    inOrdertraversal(root);
    return 0;
}

