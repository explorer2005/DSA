#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    return (fibonacci(n-1)+fibonacci(n-2));

}
int main(){
    cout<<"Enter the number upto which the fibonacci number is  required"<<endl;
    int n;
    cin>>n;
    int ans=fibonacci(n);
    cout<<"The ans is: "<<ans<<endl;
}