#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number"<<endl;
    int n;
    cin>>n;
    int product=1;
    for(int i=2;i<=n;i++){
        product=product*i;
    }
    cout<<"The factorial is: "<<product<<endl;
    return 0;
}