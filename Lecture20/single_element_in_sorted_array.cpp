#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size of the sorted array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=1;
    int e=n-2;
    while(s<=e){
        int mid= s-(s-e)/2;
        if(arr[mid]!=arr[mid-1]&&arr[mid]!=arr[mid+1]){
            cout<<"The single element is: "<<arr[mid]<<endl;
            //break;
        }
        else if(arr[mid]==arr[mid-1]&&arr[mid]!=arr[mid+1]){
            if(mid-1-s+1%2==0){
                e=mid-1;;
            }
            else{
                s=mid+1;
            }
        }
        else if(arr[mid]!=arr[mid-1]&&arr[mid]==arr[mid+1]){
            if(mid-1-s+1%2==0){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
    }
    if(arr[0]!=arr[1]){
        cout<<"The ans is: "<<arr[1]<<endl;
    }
    if(arr[n-1]!=arr[n-2]){
        cout<<"The ans is: "<<arr[n-1]<<endl;
    }
    return 0;
}