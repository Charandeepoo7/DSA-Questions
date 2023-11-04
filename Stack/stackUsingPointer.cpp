#include <iostream>
using namespace std;

class Stack{
    public:
    int size;
    int top;
    int *arr;
};

int isEmpty(Stack *ptr){
    if(ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(Stack *ptr){
    if(ptr->top == ptr->size - 1){
        return 1;
    }
    else{
        return 0;
    } 
}

void push(Stack *ptr, int value){
    if(isFull(ptr)){
        cout<<"Stack Overflow"<<endl;
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

void pop(Stack *ptr){
    if(isEmpty(ptr)){
        cout<<"Stack UnderFlow"<<endl;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
    }
}

int peek(Stack *ptr , int index){
    int arrIndex = ptr->top - index + 1;
    if(arrIndex < 0){
        cout<<"Invalid Index"<<endl;
        return -1;
    }
    else{
        return ptr->arr[arrIndex];
    }

}

int main(){

    Stack *s = new Stack();
    s->size = 10;
    s->top = -1;
    s->arr = new int[s->size];

    push(s, 10);
    push(s, 5);
    push(s, 45);
    push(s, 46);
    push(s, 24);
    push(s, 65);

    pop(s);
    cout<<"The Element at top is :"<<s->arr[s->top]<<endl;

    for(int j=1; j<=s->top+1; j++){
        cout<<"The Element at Position "<<j<<" is : "<<peek(s , j)<<endl;
    }
}