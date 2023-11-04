#include <bits/stdc++.h>
using namespace std;

class Hero {

    //Properties:
    private:
    int health;

    public:
    char level;
    char *name;
    static int timeToComplete;

    //creating a constructor
    Hero(){
        cout<<"Constructor called"<<endl;
        name = new char[100];
    }

    //Parameterized constructor
    Hero(int health , int level){
        this -> health = health;
        this -> level = level;
    }

    //Manually creating a copy constructor // &temp is a reference variable
    // Hero(Hero &temp){
    //     this -> health = temp.health;
    //     this -> level = temp.level;
    // }

    void print(){
        cout<<endl;
        cout<<" [ Name : "<<this->name<<" , ";
        cout<<"health : "<<this->health<<" , ";
        cout<<"Level : "<<this->level<<" ] "<<endl;
        cout<<endl;
    }

    //Getters and Setters
    //Getter , we are getting the value of health
    int getHealth(){
        return health; 
    }
    
    char getLevel(){
        return level;
    }

    //Setter , we are setting the value of health
    int setHealth(int h){
        health = h;
    }

    char setLevel(char l){
        level = l;
    }

    void setName(char name[]){
        strcpy(this->name , name);
    }

    //Destructor
    ~Hero(){
        cout<<"Destructor called"<<endl;
    }

};
int Hero :: timeToComplete = 10;

int main(){

   cout<<"Time to complete : "<<Hero::timeToComplete<<endl;


    // Hero h1;
    // Hero *h2 = new Hero;
    // // manually destructor called
    // delete h2;

//-----------------------------------------------------------------------------------------------------------------------------------------
    // Hero hero1;
    // hero1.setHealth(56);
    // hero1.setLevel('E');
    // char name[11] = "Charandeep";
    // hero1.setName(name);

    // hero1.print();

    // // using default copy constructor
    // Hero hero2(hero1);
    // hero2.print();

    // hero1.name[0] = 'J';
    // hero1.print();
    // hero2.print();

    // hero1 = hero2;
    // hero1.print();
    // hero2.print();


//-----------------------------------------------------------------------------------------------------------------------------------------
    //create an object statically of class Hero
    //staic allocation

    // cout<<"Hi"<<endl;
    // Hero ramesh(10);
    // cout<<"Ramesh : "<<&ramesh<<endl;
    // cout<<"Bye"<<endl;

    // Hero s(10 , 'C');
    // s.print();

    //Copy constructor
    // Hero R(s);
    // R.print();

    // Hero h1;
//--------------------------------------------------------------------------------------------------------------------------------------
    //dynamic allocation

    // Hero *b = new Hero;
    // b->setHealth(50);
    // b->setLevel('B');

    // cout<<"Health : "<<(*b).getHealth()<<" "<<b->getHealth()<<endl; //two way to access *b and b->
    // cout<<"Level : "<<(*b).getLevel()<<" "<<b->getLevel()<<endl;
//--------------------------------------------------------------------------------------------------------------------------------------

    //whenever class is empty it takes 1 byte
    // cout<<"Size : "<<sizeof(h1)<<endl; //integer is 4 bytes

    // h1.health = 100;
    // h1.level = 'A';
    // h1.setHealth(100);

    //accessing properties
    // cout<<"Health : "<<h1.getHealth()<<endl;
    // cout<<"Level : "<<h1.level<<endl;
    
//--------------------------------------------------------------------------------------------------------------------------------------
    return 0;
}