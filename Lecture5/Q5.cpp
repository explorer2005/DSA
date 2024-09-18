#include<iostream>
using namespace std;
void inBetweenPrimeNumbers(int a){
    cout<<"The between prime numbers are:"<<endl;
    for(int i=2;i<=a;i++){
        for(int j=2;j<i;j++){
            if(i%j!=0){
                cout<<j<<endl;
                break;
            }
        }
    }
}
int main(){
    cout<<"Enter the number to be checked "<<endl;
    int n;
    cin>>n;
    inBetweenPrimeNumbers(n);
    return 0;
}