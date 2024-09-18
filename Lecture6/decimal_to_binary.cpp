#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number to be changed"<<endl;
    int n;
    cin>>n;
    int remainder=0;
    int power=1;
    int binary=0;
    while(n>0){
        remainder=n%2;
        n=n/2;
        binary=binary+(remainder*power);
        power=power*10;
    }
    cout<<"The binary number is: "<<binary<<endl;
    return 0;
}