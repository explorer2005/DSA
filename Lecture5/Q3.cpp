#include<iostream>
using namespace std;
int factorial(int a){
    int factorial=1;
    for(int i=1;i<=a;i++){
        factorial=factorial*i;
    }
    return factorial;
}
int main(){
    cout<<"Enter n"<<endl;
    int n;
    cin>>n;
    cout<<"Enter r"<<endl;
    int r;
    cin>>r;
    cout<<"The coefficient is: "<<(factorial(n))/(factorial(r)*factorial(n-r))<<endl;
    return 0;
}