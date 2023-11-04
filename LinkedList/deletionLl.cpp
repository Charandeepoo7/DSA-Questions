#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

void linkedListTraversal(Node *ptr){
    while(ptr!=NULL){
        cout<<" Elements : "<<ptr ->data<<endl;
        ptr = ptr ->next;
    }
}

// Deleting first element from linked list

// Node *deleteFirst(Node *head){
//     Node *ptr = head;
//     head = head -> next;
//     free(ptr);
//     return head;
// }

//----------------------------------------------------------------------------------------------------------------------------------------------

// Deleting element at given index

// Node *deleteAtIndex(Node *head,int index){
//     Node *p = head;
//     Node *q = head ->next;
//     for (int i = 0; i < index-1; i++)
//     {
//         p = p->next;
//         q = q->next;
//     }
//     p->next = q->next;
//     free(q);
//     return head;
// }

//----------------------------------------------------------------------------------------------------------------------------------------------

// Deletion at the end

// Node *deleteAtEnd(Node *head){
//     Node *p = head;
//     Node *q = head ->next;
//     while(q->next !=NULL)
//     {
//         p = p->next;
//         q = q->next;
//     }
//     p->next = NULL;
//     free(q);
//     return head;
// }

//-----------------------------------------------------------------------------------------------------------------------------------------------

// Deleting a element with a given a value

Node *deleteAtValue(Node *head,int value){
    Node *p = head;
    Node *q = head ->next;
    while(q->data!=value && q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    if(q->data==value){
        p->next = q->next;
        free(q);
    }
    return head;
}
//---------------------------------------------------------------------------------------------------------------------------------------

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

cout<<"Before Deletion : "<<endl;
linkedListTraversal(head);

//head = deleteFirst(head);

//head = deleteAtIndex(head,2);

//head = deleteAtEnd(head);

head = deleteAtValue(head,50);

cout<<"After Deletion : "<<endl;
linkedListTraversal(head);

}