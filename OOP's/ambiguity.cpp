#include<iostream>
using namespace std;
//Hierarchical Inheritance
class A {

    public:
    void func1() {
        cout << "Inside Funcion 1" << endl;
    }

};

class B{
    public:
    void func2() {
        cout << "Inside Funcion 2" << endl;
    }
};

class C: public A , public B {
   
};

int main() {

    C object3;
    // object3.func1();
    object3.A :: func1();
    object3.B :: func2();

    return 0;
}