#include<iostream>
#include<vector>
using namespace std;
int merge(vector<int>&arr,int s,int mid,int e){
    int i=s;
    int j=mid+1;
    int Inversion=0;
    vector<int> temp;
    while(i<=mid&&j<=e){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            Inversion+=(mid-i+1);
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=e){
        temp.push_back(arr[j]);
        j++;
    }
    return Inversion;
}
int mergeSort(vector<int>&arr,int s,int e){
    ;
    if(s<e){
        int mid=s+(e-s)/2;
        int leftInversion=mergeSort(arr,s,mid);
        int rightInversion=mergeSort(arr,mid+1,e);
        int Inversion=merge(arr,s,mid,e);
        return (leftInversion+rightInversion+Inversion);
    }
    return 0;
}
int main(){
    vector<int> arr;
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int ans=mergeSort(arr,0,n-1);
    cout<<"The number of inversions are: "<<ans<<endl;
    return 0;
}