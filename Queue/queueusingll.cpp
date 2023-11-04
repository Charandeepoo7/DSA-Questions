#include <iostream>
using namespace std;
 
class Node
{
    public:
    int data;
     Node *next;
};

Node *f = NULL;
Node *r = NULL;
 
void linkedListTraversal(Node *ptr)
{
    cout<<"Printing the elements of this linked list"<<endl;
    while (ptr != NULL)
    {
        cout<<"Element: "<<ptr->data<<endl;
        ptr = ptr->next;
    }
}
 
void enqueue(int val)
{
    Node *n = new Node();
    if(n==NULL){
        cout<<"Queue is Full"<<endl;
    }      
    else{
        n->data = val;
        n->next = NULL;
        if(f==NULL){
            f=r=n;
        }
        else{
            r->next = n;
            r=n;
        }
    }
}
 
int dequeue()
{
    int val = -1;
    Node *ptr = f;
    if(f==NULL){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}
 
int main()
{
    linkedListTraversal(f);

    cout<<"Dequeuing element "<< dequeue()<<endl;

    enqueue(34);
    enqueue(4);
    enqueue(7);
    enqueue(17);

    cout<<"Dequeuing element "<<dequeue()<<endl;
    cout<<"Dequeuing element "<<dequeue()<<endl;
    // cout<<"Dequeuing element "<<dequeue()<<endl;
    // cout<<"Dequeuing element "<<dequeue()<<endl;
    
    linkedListTraversal(f);
    return 0;
}