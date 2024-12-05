#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    cout<<"Enter the numberof which the factorial is to be found"<<endl;
    int n;
    cin>>n;
    int ans=factorial(n);
    cout<<ans<<endl;
}