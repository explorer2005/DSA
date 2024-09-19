#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int r){
    for(int i=0;i<n;i++){
        if(arr[i]==r){
            return i;
        }
    }
    return -1;
}
int main(){
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the entities of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number to be searched"<<endl;
    int r;
    cin>>r;
    int ans=linearSearch(arr,n,r);
    if(ans!=-1){
        cout<<"The required number is found at the index: "<<ans<<endl;
    }
    else{
        cout<<"The given number is not found in the given array"<<endl;
    }
    return 0;
}