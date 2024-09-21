#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the sizeof the array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    swap(min,max);
    cout<<"The min is: "<<min<<endl;
    cout<<"The max is: "<<max<<endl;
    return 0;
}