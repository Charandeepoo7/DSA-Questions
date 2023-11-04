#include<iostream>
using namespace std;

class A{

    // public:
    // void sayHello(){
    //     cout<<"Hello from A"<<endl;
    // }
    // //function overloading
    // //agar func overloading karni hai toh input parameter/argument change karna padega
    // void sayHello(string name){
    //     cout<<"Hello from A with value "<<name<<endl;
    // }

    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }
    
    //operator overloading
    void operator+(A &obj){
        // int value1 = this -> a;
        // int value2 = obj.a;
        // cout<<value2-value1<<endl;
        cout<<"Hello from operator overloading"<<endl;
    }

    void operator() (){
        cout<<"Hello from operator overloading again"<<endl;
    }
};

//Runtime polymorphism
class Animal{
    public:
    void eat(){
        cout<<"Eating..."<<endl;
    }
};

class Dog : public Animal{
    public:
    void eat(){
        cout<<"Eating bread..."<<endl;
    }
};

int main(){

    Dog d;
    d.eat();



    // A obj1 , obj2;
    // obj1.a = 10;
    // obj2.a = 20;
    // obj1 + obj2;
    // obj1();


    // A obj;
    // obj.a = 10;
    // obj.b = 20;
    // cout<<obj.add()<<endl;


    // A obj;
    // obj.sayHello();

}