#include<iostream>
using namespace std;


class Animal {

    public:
    int age;
    int weight;


    public:
    void bark() {
        cout << "Barking " << endl;
    }
};

class Human{
    public:
    string color;

    public:
    void speak() {
        cout << "Speaking " << endl;
    }
};

class Hybrid : public Animal, public Human {

};

class Dog: public Animal {

};

int main() {

    Hybrid h1;
    h1.bark();
    h1.speak();

    return 0;
}