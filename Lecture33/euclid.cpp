#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(a==0 && b==0){
        return 0;
    }
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    else{
        if(a>=b){
            gcd(a%b,b);
        }
        else{
            gcd(a,b%a);
        }
    }
}
int main(){
    cout<<"Enter the number of which the gcd is to be found"<<endl;
    int a,b;
    cin>>a>>b;
    int ans = gcd(a,b);
    cout<<"The ans is: "<<ans<<endl;
    return 0;
}