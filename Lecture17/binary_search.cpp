#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //I am writting a loop just for a sack of not required as the binary search is applicable on sorted arrays only
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int a=arr[j];
                arr[j]=arr[i];
                arr[i]=a;
            }
        }
    }
    cout<<"The sorted array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the number to be searched"<<endl;
    int k;
    cin>>k;
    int s=0;
    int e=n-1;
    
    while(s<=e){
        int mid=(s+e)/2;
        if(k>arr[mid]){
            s=mid+1;
        }
        else if(k<arr[mid]){
            e=mid-1;
        }
        else{
            cout<<"The element is found at the index: "<<mid<<endl;
            break;
        }
        // else{
        //     cout<<"The element is not found in the given array"<<endl;
            
        // }
    }
    return 0;
}