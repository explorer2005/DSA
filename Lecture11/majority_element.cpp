#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of elements"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    return 0;
}