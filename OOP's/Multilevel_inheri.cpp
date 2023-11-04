#include<iostream>
using namespace std;


class Animal {

    public:
    int age;
    int weight;


    public:
    void speak() {
        cout << "Speaking " << endl;
    }
};

class Dog: public Animal {
    public:
    void speak() {
        cout << "Barking " << endl;
    }
};

class GermanShepherd: public Dog {
    // public:
    // void speak() {
    //     cout << "Walking " << endl;
    // }
};

int main() {

    GermanShepherd g;
    g.speak();


    return 0;
}