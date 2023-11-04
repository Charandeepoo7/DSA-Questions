#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

Node *insertAtEnd(Node *head,int data){
    Node *newnode = new Node();
    newnode ->data = data;
    Node *ptr = head;
    while(ptr ->next !=NULL){
        ptr = ptr ->next;
    }
    ptr ->next = newnode;
    newnode ->next = NULL;
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

head = insertAtEnd(head,152);
linkedListTraversal(head);

}
