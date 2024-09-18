#include<iostream>
using namespace std;
void revNum(int a){
    int newNum=0;
    int rem=0;
    while(a!=0){
        rem=a%10;
        newNum=newNum*10+rem;
        a=a/10;
    }
    cout<<"The new number is: "<<newNum<<endl;
}
int main(){
    cout<<"Enter the number"<<endl;
    int n;
    cin>>n;
    revNum(n);
    return 0;
}