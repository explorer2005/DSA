#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number tobe checked"<<endl;
    int n;
    cin>>n;
    for(int i=0; i*i<=n;i++){
        if(n%i==0){
            cout<<"The number is not prime"<<endl;
            break;
        }
    }
    
    return 0;
}