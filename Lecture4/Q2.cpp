#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of square"<<endl;
    cin>>n;
    int count=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}