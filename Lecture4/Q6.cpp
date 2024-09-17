#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size if triangle"<<endl;
    int n;
    cin>>n;
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
}