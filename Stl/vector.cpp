#include<iostream>
#include<vector>
using namespace std;

template <class T>;
void display(vector<T> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> vec1;
    vector<char> vec2(4);
    vector<char> vec3(vec2);
    vector<int> vec4(6,3);
    display(vec1);
    int size = 5 , element;
    // cout<<"Enter size of vector "; 
    // cin>>size;
    // for(int i=0;i<size;i++){
        
    //     cout<<"Enter the number :";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1 , 1 , 566);
    // display(vec1);
    return 0;
}