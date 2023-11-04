#include <iostream>
using namespace std;

class Human{

    private:
    int Height;

    public:
    int weight;

    private:
    int Age;

    public:
    int getAge(){
        return this->Age;
    }
    void setWeight(int w){
        this->weight = w;
    }
};

class Male : public Human{
    public:
    string color;

    void sleep(){
        cout << " Male Sleeping " << endl;
    }
    int getHeight(){
        return this->Height;
    }
};

int main(){
    Male m1;
    cout<< m1.Height << endl;

    Male object1;
    cout<< object1.Age << endl;
    cout<< object1.Height << endl;

    cout<< object1.color << endl;
    object1.setWeight(84);
    cout<< object1.weight << endl;
    object1.sleep();

}