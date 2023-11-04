#include <bits/stdc++.h>
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for(it=lst.begin();it!=lst.end();it++){
        cout<<*it<<" ";
    } cout<<endl;
}

int main(){

    list<int> List1;
    List1.push_back(5);
    List1.push_back(6);
    List1.push_back(45);
    List1.push_back(4);
    List1.push_back(5);

    // Soting the list
    // List1.sort();

    // reversing the list
    // List1.reverse();
    
    display(List1);
    // List1.pop_front(); // We can pop from any side front or back
    // List1.remove(45);
    // display(List1);

    list<int> List2(3);
    list<int> :: iterator iter;
    iter = List2.begin();
    *iter = 45;
    iter++;
    *iter = 48;
    iter++;
    *iter = 89;
    iter++;

    display(List2);

    List1.sort();
    List2.sort();

    // Merging two linked list
    List1.merge(List2);
    display(List1);
}