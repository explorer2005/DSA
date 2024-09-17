    //      *
    //    *   *
    //  *       *
    //    *   *
    //      *


#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size of diamond"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=0){
            for(int j=n-i;j<n-1+i;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        
        cout<<endl;
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j>=0;j--){
            cout<<" ";
        }
        cout<<"*";
        if(i!=(n-2)){
        for(int j=i+2;j<=2*n-i-4;j++){
            cout<<" ";

        }
        cout<<"*";
        }
        
        cout<<endl;
    }
    
    
}