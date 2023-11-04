#include<iostream>
using namespace std;

int binarySearch(int arr[] , int size , int key){

    int start = 0;
    int end = size - 1;

    int mid = (start + end)/2;

    while(start <= end){

        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = (start + end)/2;
    }
    return -1;
}

int main(){

    int even[6] = {2 , 4 , 6 , 8 , 10 , 12};
    int odd[5] = {3 , 8 , 11 , 14 , 78};

    int evenindex = binarySearch(even , 6 , 10);

    int oddindex = binarySearch(odd , 5 , 8);

    cout<<"Element is : "<<evenindex<<endl;

    cout<<"Element is : "<<oddindex;
}