#include <iostream>
using namespace std;

class Node{
    public:
        int key;
        Node *left;
        Node *right;
        int height;
};

int getHeight(Node *n){
    if(n == NULL){
        return 0;
    }
    return n->height;
}

Node *createNode(int key){
    Node *node = new Node();
    node -> key = key;
    node -> left = NULL;
    node -> right = NULL;
    node -> height = 1;

    return node;
}

int max(int a, int b){
    if(a > b){
        return a;
    }
    return b;
}

int getBalanceFactor(Node *n){
    if(n == NULL){
        return 0;
    }
    return getHeight(n->left) - getHeight(n->right);
}

Node *RightRotation(Node *y){
    Node *x = y->left;
    Node *T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;

    return x; 
}

Node *LeftRotation(Node *x){
    Node *y = x->left;
    Node *T2 = y->left;

    y->left = x;
    x->right = T2;

    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;

    return y; 
}

Node *insert(Node *node , int key){
    if(node == NULL){
        return createNode(key);
    }
    if(key < node->key){
        node->left = insert(node->left, key);
    }
    else if(key > node->key){
        node->right = insert(node->right, key);
        return node;
    }
    node -> height = 1 + max(getHeight(node->left), getHeight(node->right));
    int bf = getBalanceFactor(node);

    // Left Left Case
    if(bf > 1 && key < node->left->key){
        return RightRotation(node);
    }
    // Right Right Case
    if(bf < -1 && key > node->right->key){
        return LeftRotation(node);
    }
    // Left Right Case
    if(bf > 1 && key > node->left->key){
        node->left = LeftRotation(node->left);
        return RightRotation(node);
    }
    // Right Left Case
    if(bf < -1 && key < node->right->key){
        node->right = RightRotation(node->right);
        return LeftRotation(node);
    }
    return node;
     
}

int main(){
    Node *root = NULL;
    root = insert(root, 45);
    root = insert(root, 4);
    root = insert(root, 5);
    root = insert(root, 8);
    root = insert(root, 9);
    // preOrder(root);
    return 0;
}