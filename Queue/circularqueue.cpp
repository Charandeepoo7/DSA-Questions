#include <iostream>
using namespace std;

class CircularQueue{
    public:
    int size;
    int f;
    int r;
    int* arr;
};

int isEmpty(CircularQueue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}

int isFull(CircularQueue *q){
    if((q->r+1)%q->size == q->f){
        return 1;
    }
    return 0;
}

void enqueue(CircularQueue *q , int val){
     if(isFull(q)){
        cout<<"This Queue is full";
    }
    else{
        q -> r = (q->r+1)%q->size;
        q -> arr[q->r] = val;
        cout<<"Enqued element:"<<val<<endl;
    }
}

int dequeue(CircularQueue *q){
    int a = -1;
     if(isEmpty(q)){
        cout<<"This Queue is empty";
    }
    else{
        q -> f = (q -> f+1)%q->size;
        a = q -> arr[q->f];
    }
    return a;
}

int main(){
    
    CircularQueue q;
    q.size = 4;
    q.f = q.r = 0;
    q.arr = new int[q.size];
    
    // Enqueue few elements
    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 1); 
    
    cout<<"Dequeuing element "<<dequeue(&q)<<endl;
    cout<<"Dequeuing element "<<dequeue(&q)<<endl;
    cout<<"Dequeuing element "<<dequeue(&q)<<endl;
    
    enqueue(&q, 45);
    enqueue(&q, 45);
    enqueue(&q, 45);
 
    if(isEmpty(&q)){
        cout<<"Queue is empty"<<endl;
    }
    if(isFull(&q)){
        cout<<"Queue is full"<<endl;
    }
}