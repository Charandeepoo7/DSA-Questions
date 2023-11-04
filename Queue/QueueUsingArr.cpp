#include <bits/stdc++.h>
using namespace std;

class  Queue{
    public:
    int size;
    int front;
    int rear;
    int *arr;
};

int isFull(Queue *q){
    if(q -> rear == q -> size - 1){
        return 1;
    }
    return 0;
}

int isEmpty(Queue *q){
    if(q -> rear == q -> front){
        return 1;
    }
    return 0;
}

void enqueue(Queue *q, int val){
    if(isFull(q)){
        cout<<"Queue is full"<<endl;
    }
    else{
        q -> rear++;
        q -> arr[q -> rear] = val;

    }
}

int dequeue(Queue *q, int val){
    int a = -1;
    if(isEmpty(q)){
        cout<<"Queue is full"<<endl;
    }
    else{
        q -> front++;
        a = q -> arr[q -> front];
    }
    return a;
}

void printQueue(Queue* q) {
    if (isEmpty(q)) {
        cout << "Queue is empty" <<endl;
        return;
    }

    cout << "Queue elements: ";
    for (int i = q->front + 1; i <= q->rear; i++) {
        cout << q->arr[i] << " ";
    }
    cout <<endl;
}

int main(){

    Queue q;
    q.size = 100;
    q.front = q.rear = -1;
    q.arr = new int[q.size];

    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 1);

    // cout<<"Dequeue element "<<dequeue(&q, 12)<<endl;
    // cout<<"Dequeue element "<<dequeue(&q, 15)<<endl;

    printQueue(&q);
}