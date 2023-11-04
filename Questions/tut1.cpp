#include<iostream>
using namespace std;
class Node{
    public:
    int data;       //
    Node *next;
};
void printlist(Node *ptr){
    while(ptr != NULL){
        cout << ptr->data << endl;
        ptr = ptr-> next;
    }                      
}
int main(){                 
    Node *head = new Node();                  // Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();                 // allocating memory to heap
    Node *fourth = new Node();
    Node *fifth = new Node();
    head -> data = 15;
    head -> next = second;
    second -> data = 20;
    second -> next = third;
    third ->  data = 25;
    third -> next = fourth;
    fourth -> data = 30;
    fourth -> next = fifth;
    fifth -> data = 35;
    fifth -> next = NULL;
    printlist(head);
}
