#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size of butterfly"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=(2*n-2*i-2);j++){
            cout<<" ";
        }
        for(int j=2*n;j>=(2*n-i);j--){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0; j<=n-i-1;j++){
            cout<<"*";
        }
        for(int j=1;j<=2*i;j++){
            cout<<" ";
        }
        for(int j=n+i;j<=(2*n)-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}