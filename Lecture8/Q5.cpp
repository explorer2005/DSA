#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size of array 1"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elemets of the first array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the size of the second array"<<endl;
    int m;
    cin>>m;
    int arr[m];
    cout<<"Enter the elements of the second array"<<endl;
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    return 0;
}