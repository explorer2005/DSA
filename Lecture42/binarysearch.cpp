#include<iostream>
using namespace std;
int binarysearch(int arr[], int target, int s, int l){
    int mid= s+(l-s)/2;
    while(s<=l){
    if(mid>=target){
        return binarysearch(arr,target,s,mid-1);
    }
    else if(mid<=target){
        return binarysearch(arr,target,mid+1,l);
    }
    else{
        return mid;
    }
    }
    return -1;
}
int main(){
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the target to be searched"<<endl;
    int k;
    cin>>k;
    int ans=binarysearch(arr,k,0,n-1);
    cout<<"The ans is: "<<ans<<endl;
    return 0;
}