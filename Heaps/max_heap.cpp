#include<bits/stdc++.h>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;

    heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int val){
        size = size + 1;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parent = index/2;

            if(arr[parent] < arr[index]){
                swap(arr[parent] , arr[index]);
                index = parent; 
            }
            else {
                return;
            }
        }
    }

    void print(){
        for(int i = 1; i <= size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void deleteFromHeap(){
        if(size == 0){
            cout<<"Heap is empty"<<endl;
            return;
        }
        //here we are putting last elemnt into root node
        int i = 1;
        arr[i] = arr[size];
        size--;

        //take root node to its correct position 
        while(i<size){
            int leftIndex = 2*i;
            int rightIndex = (2*1) + 1;

            if(leftIndex < size && arr[i] < arr[leftIndex]){
                swap(arr[i] , arr[leftIndex]);
                i = leftIndex;
            }
            else if(rightIndex < size && arr[i] < arr[rightIndex]){
                swap(arr[i] , arr[rightIndex]);
                i = rightIndex;
            }
            else {
                return;
            }
        }
    }
};

void heapify(int arr[] , int n , int i){
    
    int largest = i;
    int left = 2*i;
    int right = 2*i + 1;

    if(left <= n && arr[largest] < arr[left]){
        largest = left;
    }
    if(right <= n && arr[largest] < arr[right]){
        largest = right;
    }
    if(largest != i){
        swap(arr[largest] , arr[i]);
        heapify(arr , n , largest);
    }
}

void heapSort(int arr[] , int n){
    int heapSize = n;

    while(heapSize > 1){
        swap(arr[heapSize] , arr[1]);
        heapSize--;

        heapify(arr , heapSize , 1);
    }
}

int main(){

    heap h;
    h.insert(3);
    h.insert(2);
    h.insert(1);
    h.insert(5);
    h.insert(6);
    h.insert(4);

    h.print();

    h.deleteFromHeap();
    h.print();

    int arr[10] = {-1 ,3,2,3,1,2,4,5,5,6};
    int n = 9;
    for(int i=n/2; i>0; i--){
        heapify(arr , n , i);
    }
    cout<<"Printing heapified array"<<endl;
    for(int i=1; i<=n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    heapSort(arr , n);
    for(int i=1; i<=n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<"Uing priority queue"<<endl;

    //Max heap
    priority_queue<int> pq;
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;

    //Min heap
    priority_queue<int , vector<int> , greater<int>> pq1;
    pq1.push(4);
    pq1.push(2);
    pq1.push(5);
    pq1.push(3);

    cout<<pq1.top()<<endl;
    pq1.pop();
    cout<<pq1.top()<<endl;
}