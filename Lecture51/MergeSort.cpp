#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&arr,int mid, int s,int e){
    vector<int>ans;
    int i=s;
    int j=mid+1;
    while(i<=mid&&j<=e){
        if(arr[i]<arr[j]){
            ans.push_back(arr[i]);
            i++;
        }
        else{
            ans.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        ans.push_back(arr[i]);
        i++;
    }
    while(j<=e){
        ans.push_back(arr[j]);
        j++;
    }
    for(int k=0;k<ans.size();k++){
        arr[k+s]=ans[k];
    }
}
void mergeSort(vector<int>&arr,int s,int e){
    int mid=s+(e-s)/2;
    if(s<e){
        mergeSort(arr,s,mid);
        mergeSort(arr,mid+1,e);
        merge(arr,mid,s,e);
    }
    
}
int main(){
    vector<int> arr;
    cout<<"Enter the number of elements to be sorted"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    
    mergeSort(arr,0,n-1);
    for(int k:arr){
        cout<<k<<" ";
    }
    cout<<endl;
}