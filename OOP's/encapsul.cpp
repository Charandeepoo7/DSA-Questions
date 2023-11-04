#include<iostream>
using namespace std;

class Student{

    private:
    int age;
    string name;
    int height;

    public:
    int getAge(){
        return this->age;
    }
};

int main(){

    Student first;
    cout<<first.getAge();
}