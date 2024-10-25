#include<iostream>
using namespace std;
void insertionsort(int arr[], int n){
    for(int i=1;i<n;i++){
        int curr=i;
        int pre=i-1;
        while(pre>=0&&arr[pre]>arr[curr]){
            arr[pre+1]=arr[pre];
            pre--;
        }
        arr[pre+1]=curr;
    }
    cout<<"The sorted array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionsort(arr,n);
    return 0;
}