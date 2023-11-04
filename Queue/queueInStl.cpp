#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue <int> q;

    q.push(12);
    q.push(15);
    q.push(1);

    cout<<"Queue size: "<<q.size()<<endl;
    cout<<"Queue front: "<<q.front()<<endl;

    q.pop();

    cout<<"Queue size: "<<q.size()<<endl;
    cout<<"Queue front: "<<q.front()<<endl;
}