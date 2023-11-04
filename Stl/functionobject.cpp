#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {56,48,5,3,95,15};
    sort(arr,arr+5,greater< int >( )); // It will sort array in descending order
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
}