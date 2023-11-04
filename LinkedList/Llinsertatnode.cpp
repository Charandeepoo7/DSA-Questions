#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

Node *insertAtNode(Node *head,Node *prevnode,int data){
    Node *ptr = new Node();
    ptr ->data = data;
    ptr ->next = prevnode ->next;
    prevnode ->next = ptr;
    return head;
}

void linkedListTraversal(Node *ptr){
    while(ptr!=NULL){
        cout<<" Elements : "<<ptr ->data<<endl;
        ptr = ptr ->next;
    }
}

int main(){
Node *head = new Node();
Node *second = new Node();
Node *third = new Node();
Node *fourth = new Node();
Node *fifth = new Node();

head ->data = 7;
head ->next = second;

second ->data = 11;
second ->next = third;

third ->data = 25;
third ->next = fourth;

fourth ->data = 65;
fourth ->next = fifth;

fifth ->data = 50;
fifth ->next = NULL;

head = insertAtNode(head,second,82);
linkedListTraversal(head);

}