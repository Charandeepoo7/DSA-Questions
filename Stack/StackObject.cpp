#include <bits/stdc++.h>
// #include <stack>
using namespace std;

int main(){

    stack <int> st;

    st.push(10);
    st.push(45);
    st.push(5);

    cout<<st.top()<<endl;

    st.pop();
    st.pop();
    // st.pop();

    if(st.empty())
        cout<<"Stack is empty"<<endl;
    else
        cout<<"Stack is not empty"<<endl;
}