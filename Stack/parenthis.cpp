#include <bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int size;
    int top;
    char *arr;
};

int isEmpty(Stack *ptr){
    if(ptr->top == -1){
        cout<<"Stack is Empty"<<endl;
        return 1;
    }
    else {
        return 0;
    }
}

int isFull(Stack *ptr){
    if(ptr->top == ptr->size - 1){
        cout<<"Stack is Full"<<endl;
        return 1;
    }
    else{
        return 0;
    }
}

void push(Stack *ptr, char value){
    if(isFull(ptr)){
        cout<<"Stack Overflow"<<endl;
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

int pop(Stack *ptr){
    if(isEmpty(ptr)){
        cout<<"Stack Underflow"<<endl;
        return -1;
    }
    else{
        int value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}

int parenthesisMatch(char *ptr){
    Stack *sp = new Stack();
    sp->size = 100;
    sp->top = -1;
    sp->arr = new char[sp->size];

    for(int i=0 ; ptr[i]!='\0';i++){
        if(ptr[i] == '('){
            push(sp , '(');
        }
        else if(ptr[i] == ')'){
            if(isEmpty(sp)){
                return 0;
            }
            else{
                pop(sp);
            }
        }
    }
    if(isEmpty(sp)){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){

    char *exp = "((8)(*--$$9))";
    if(parenthesisMatch(exp)){
        cout<<"The parenthesis is matching"<<endl;
    }
    else{
        cout<<"The parenthesis is not matching"<<endl;
    }

}