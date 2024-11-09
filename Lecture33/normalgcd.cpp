#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of whose gcd is to be found"<<endl;
    int a,b;
    cin>>a>>b;
    int gcd=0;
    if(a==0 && b==0){
        gcd=0;
    }
    if(a==0){
        gcd=b;
    }
    if(b==0){
        gcd=a;
    }
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    cout<<"The gcd is"<<gcd<<endl;
    return 0;
}