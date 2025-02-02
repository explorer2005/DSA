#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>&arr, int s, int e){
    int i=s-1;
    int pivot=arr[e];
    for(int j=s;j<e;j++){
        if(arr[j]<=pivot){
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    i++;
    int t=arr[e];
    arr[e]=arr[i];
    arr[i]=t;
    return i;
}
void quickSort(vector<int>&arr, int s, int e){
    
    if(s<e){
        int pivotPoint = partition(arr,s,e);
        quickSort(arr,s,pivotPoint-1);
        quickSort(arr,pivotPoint+1,e);
    }
}
int main(){
    vector<int> arr;
    cout<<"Enter the number of elements to be sorted"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    quickSort(arr,0,n-1);
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
}