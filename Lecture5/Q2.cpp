#include<iostream>
using namespace std;
int sum(int a){
    int sum=0;
    int rem=0;
    while(a!=0){
        rem=a%10;
        sum=sum+rem;
        a=a/10;
    }
    return sum;
}
int main(){
    cout<<"Enter the number to be calculated"<<endl;
    int n;
    cin>>n;
    cout<<"The sum of digits is: "<<sum(n)<<endl;
    return 0;
}