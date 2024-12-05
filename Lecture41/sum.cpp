#include<iostream>
using namespace std;
int sum(int n){
    if(n==1){
        return 1;
    }
    return n+sum(n-1);
}
int main(){
    cout<<"Enter the number upto which the sum is to be calculated"<<endl;
    int n;
    cin>>n;
    int ans=sum(n);
    cout<<"The ans is: "<<ans<<endl;
}