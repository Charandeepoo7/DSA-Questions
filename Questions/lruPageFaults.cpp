#include <bits/stdc++.h>
using namespace std;

int pageFaults(int pages[] , int size , int capacity){

    int pageFaults = 0;
    unordered_set <int> s;
    unordered_map <int , int> index;

    for(int i=0;i<size;i++){
        if(s.size() < capacity){
            if(index.find(pages[i]) == index.end()){
                s.insert(pages[i]);
                pageFaults++;
            }
            index[pages[i]] = i;
        }
        else {
            if(index.find(pages[i]) == index.end()){
                int lru = INT_MAX;
                int val;

                for(auto it = s.begin(); it != s.end(); it++){
                    if(index[*it] < lru){
                        lru = index[*it];
                        val = *it;
                    }
                }
                s.erase(val);
                s.insert(pages[i]);
                pageFaults++;
            }
            index[pages[i]] = i;
        }
    }
    return pageFaults;
}

int main(){
    int arr[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int capacity = 4;

    cout<< "Number of page faults: "<< pageFaults(arr , n , capacity)<<endl;
}