#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int> marksMap;
    marksMap["Harry"] = 98;
    marksMap["Charandeep"] = 100;
    marksMap["Ajit"] = 45;
    marksMap.insert( { {"Rohan", 89}, {"Akshat", 46} } );
    map<string,int> :: iterator iter;
    for(iter=marksMap.begin();iter!=marksMap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
}