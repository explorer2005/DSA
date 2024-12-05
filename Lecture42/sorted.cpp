#include<iostream>
using namespace std;
bool isSorted(int arr[], int n){
    if(n==0||n==1){
        return 1;
    }
    return arr[n-1]>arr[n-2]&&isSorted(arr,n-1);
}
int main(){
    cout<<"Enter the elements of the array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the array to be checked"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool ans=isSorted(arr,n);
    cout<<ans<<endl;
}