#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the sizeof the array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The entered array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int largest=arr[0];
    int smallest=arr[0];
    int larindex=0;
    int smallindex=0;
    for(int i=0;i<n;i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(smallest>arr[i]){
            smallest=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(largest==arr[i]){
            larindex=i;
        }
    }
        for(int i=0;i<n;i++){
        if(smallest==arr[i]){
            smallindex=i;
        }
    }
    cout<<"The largest is: "<<largest<<"& the index is: "<<larindex<<endl;
    cout<<"The smallest is: "<<smallest<<"& the index is: "<<smallindex<<endl;
    
    return 0;
}