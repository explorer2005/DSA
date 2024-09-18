#include<iostream>
using namespace std;
void isPrime(int a){
    int flag=1;
    for(int i=2;i<a;i++){
        if(a%i==0){
            flag=0;
            break;
        }
    }
    if(flag==0){
        cout<<"The number is not prime"<<endl;
    }
    else{
        cout<<"The number is prime"<<endl;
    }
}
int main(){
    cout<<"Enter the number to be checked"<<endl;
    int n;
    cin>>n;
    isPrime(n);
    return 0;
}