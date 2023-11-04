#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node *Left;
    Node *Right;

};

Node * createNode(int data){

    Node *n  = new Node();
    n -> data = data;
    n -> Left = NULL;
    n -> Right = NULL;
    return n;
}

void *preOrder(Node *root){

    if(root != NULL){
        cout<<root -> data<< " ";
        preOrder(root -> Left);
        preOrder(root -> Right);
    }
}

void *postOrder(Node *root){

    if(root != NULL){
        postOrder(root -> Left);
        postOrder(root -> Right);
        cout<<root -> data<< " ";
    }
}

void *inOrder(Node *root){

    if(root != NULL){
        inOrder(root -> Left);
        cout<<root -> data<< " ";
        inOrder(root -> Right);
    }
}

int isBST(Node *root){

    Node *prev = NULL;
    if(root != NULL){
        if(!isBST(root -> Left)){
            return 0;
        }
        if(prev != NULL && root -> data <= prev -> data){
            return 0;
        }
        prev = root;
        return isBST(root -> Right);
    }
    else{
        return 1;
    }
}

Node* iterative(Node *root , int key){
        while(root != NULL){
            if(key == root -> data){
                return root;
            }
            else if(key < (root -> data)){
                root = root -> Left;
            }
            else{
                root = root -> Right;
            }
        } return NULL;
}

void insertBst(Node *root , int key){
    Node *prev = NULL;
    while(root != NULL){
        prev  = root;
        if(key == root -> data){
            cout<<"Cannot insert "<<key<<", already in BST"<<endl;
        }
        else if(key < root -> data){
            root = root -> Left;
        }
        else{
            root = root -> Right;
        }
    }
    Node *newNode = createNode(key);
        if(key < prev -> data){
            prev -> Left = newNode;
        }
        else{
            prev -> Right = newNode;
        }
}

int main(){

    Node *p = new Node();
    Node *p1 = new Node();
    Node *p2 = new Node();
    Node *p3 = new Node();
    Node *p4 = new Node();

    p = createNode(5);
    p1 = createNode(3);
    p2 = createNode(6);
    p3 = createNode(1);
    p4 = createNode(4);

    p -> Left = p1;
    p -> Right = p2;
    p1 -> Left = p3;
    p1 -> Right = p4;

    // preOrder(p);
    // cout<<endl;
    // postOrder(p);
    cout<<endl;
    inOrder(p);
    // cout<<endl;
    // cout<<isBST(p);

    insertBst(p , 7);
    cout<<p ->Right -> Right -> data<<endl;

    cout<<endl;
    inOrder(p);
}