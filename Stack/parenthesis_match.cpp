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

int match(char a , char b){
    if(a == '(' && b == ')'){
        return 1;
    }
    if(a == '{' && b == '}'){
        return 1;
    }
    if(a == '[' && b == ']'){
        return 1;
    }
    return 0;
}

int parenthesisMatch(char *ptr){
    Stack *sp = new Stack();
    sp->size = 100;
    sp->top = -1;
    sp->arr = new char[sp->size];

    char popped_ch;

    for(int i=0 ; ptr[i]!='\0';i++){
        if(ptr[i] == '(' || ptr[i] == '{' || ptr[i] == '['){
            push(sp , ptr[i]);
        }
        else if(ptr[i] == ')' || ptr[i] == '}' || ptr[i] == ']'){
            if(isEmpty(sp)){
                return 0;
            }
            popped_ch = pop(sp);
            if(!match(popped_ch , ptr[i])){
                return 0;
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

    char *exp = "[4-6]((8){(9-8))";
    if(parenthesisMatch(exp)){
        cout<<"The parenthesis is balanced"<<endl;
    }
    else{
        cout<<"The parenthesis is not balanced"<<endl;
    }

}