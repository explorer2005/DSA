#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the height of the triangle"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k=i+1;
        for(int j=0;j<=i;j++){
            cout<<k<<" ";
            k--;
        }
        cout<<endl;
    }
}