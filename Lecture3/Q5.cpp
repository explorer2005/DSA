#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter the number to be checked"<<endl;
    // cin>>n;
    // int i=2;
    // while(i<n){
    //     if(n%i==0){
    //         cout<<"The number is not prime"<<endl;
    //         break;
    //     }
    //     else{
    //         i++;
    //         if(i==(n-1)){
    //             cout<<"The number is prime"<<endl;
    //         }
    //     }
        
    // }
    int isPrime=1;
    cout<<"Enter the number to be checked"<<endl;
    int n;
    cin>>n;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            isPrime=0;
        }
    }
    if(isPrime==0){
        cout<<"The number is not prime"<<endl;
    }
    else{
        cout<<"The number is prime"<<endl;
    }
    return 0;
}