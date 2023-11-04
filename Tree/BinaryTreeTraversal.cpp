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

int main(){

    Node *p = new Node();
    Node *p1 = new Node();
    Node *p2 = new Node();
    Node *p3 = new Node();
    Node *p4 = new Node();

    p = createNode(4);
    p1 = createNode(1);
    p2 = createNode(6);
    p3 = createNode(5);
    p4 = createNode(2);

    p -> Left = p1;
    p -> Right = p2;
    p1 -> Left = p3;
    p1 -> Right = p4;

    preOrder(p);
    cout<<endl;
    postOrder(p);
    cout<<endl;
    inOrder(p);

}