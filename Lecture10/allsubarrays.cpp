#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"All the subarrays are"<<endl;
    int sum=0;
    int start=0;
    int end=n-1;
    while(start<n){
        for(int i=start;i<n;i++){
            for(int j=start;j<=i;j++){
                cout<<arr[j]<<" ";
            }
            sum=sum+1;
            cout<<endl;
        }
        start++;
    }
    cout<<"Total number of arrays are: "<<sum<<endl;
}