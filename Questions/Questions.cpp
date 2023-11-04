// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cin>>n;
//     int ans = 0;

//     while(n!=0){

//         int rev = n % 10;
//         if((ans > INT8_MAX/10) || (ans < INT8_MIN/10 )){                     //Reverse An Integer
//             cout<<0<<endl;
//         }
//         ans = (ans * 10) + rev;
//         n = n/10;
//     }
//     cout<<ans<<endl;
// }


#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int mask = 0;

    if(n == 0){
        cout<<1<<endl;
    }
    while(n!=0){

        mask = (mask << 1) | 1 ;
        n = n >> 1;
    }
    int ans = (~n) & mask;
    cout<<ans<<endl;
}