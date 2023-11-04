#include <iostream>
using namespace std;

int searchRota(int arr[] , int size , int target){

    int start = 0;
    int end = size - 1;
    int mid = (start + end)/2;

    while(start <=end){

        if(arr[mid] == target){
            return target;
        }
        if(arr[start] <= arr[mid]){
            if(target >= arr[start] && target <= arr[mid]){
                end = mid - 1 ;
            }
            else{
                start = mid + 1;
            }
        }
        else{
            if(target >= arr[mid] && target <= arr[end]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        mid = (start + end/2);
    }
    return -1;
}
int main(){

    int arrayBn[7]  = {4 , 5 , 6 , 7 , 0 , 1 , 2};
    int searchin = searchRota(arrayBn , 6 , 2);
    cout<<searchin<<endl;
}