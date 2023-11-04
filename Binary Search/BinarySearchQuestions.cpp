#include<bits/stdc++.h>
using namespace std;

int firstOccurence(vector<int>& arr , int n , int key){

    int s = 0 , e = n - 1; 
    int mid = s + ((e-s)/2);
    int ans = 0;

    while(s<=e){

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid] < key){
            e = mid - 1;
        }
        else if(arr[mid] > key){
            s = mid + 1;
        }

        mid = s + ((s-e)/2);
    }

    return ans;

}

int LastOccurence(vector<int>& arr , int n , int key){

    int s = 0 , e = n - 1; 
    int mid = s + ((e-s)/2);
    int ans = 0;

    while(s<=e){

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid] < key){
            e = mid - 1;
        }
        else if(arr[mid] > key){
            s = mid + 1;
        }
        mid = s + ((s-e)/2);
    }
    return ans;

}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int key){
    pair <int ,int > p;
    p.first = firstOccurence(arr , n , key);
    p.second = LastOccurence(arr , n , key);

    return p;
}

// int main(){

//     int arr[5] = {8 , 14 , 36 , 36 , 58};

//     int first = firstOccurence(arr, 5 , 36);
//     int second = LastOccurence(arr, 5 , 36);
//     cout<<"First Occurence Index of 36 is " << first << endl;
//     cout<<"Lst Occurence Index of 36 is " << second;
// }