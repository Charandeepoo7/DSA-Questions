#include<iostream>
using namespace std;

int main(){
    int a = 9;
    int *b = &a;          // * -> (Value at) dereference operator  & -> (Address of) operator
    cout<<b<<endl;        //Prints the addrres of a
    cout<<*b<<endl;       //Prints the value of a

    int **c = &b;         // Pointer to pointer
    cout<<&b<<endl;       //Address of b
    cout<<c<<endl;        //Address of b
    cout<<**c<<endl;      // value at address value_at(value_at(c))
    cout<<*c<<endl;       //value at address c
    return 0;
}