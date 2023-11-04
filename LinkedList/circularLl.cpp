#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};
//-------------------------------------------------------------------------------------------------------------------------------------------
// Circular Linked list traversal

void linkedListTraversal(Node *head){
    Node *ptr = head;
    do{
        cout<<" Elements : "<<ptr ->data<<endl;
        ptr = ptr ->next;
    }while(ptr!=head);
}
//-----------------------------------------------------------------------------------------------------------------------------------------
Node *insertAtFirst(Node *head,int data){
    Node *newnode = new Node();
    newnode ->data = data;

    Node *p = head->next;
    while(p->next!=head){
        p = p->next;
    }
    p ->next = newnode;
    newnode ->next = head;
    head = newnode;
    return head;
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
fifth ->next = head;

// linkedListTraversal(head);
head = insertAtFirst(head,80);
linkedListTraversal(head);
}