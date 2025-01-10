#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int> &arr,int s, int e){
    int i=s-1;int pivot = arr[e];
    for(int j=s;j<e;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    i++;
    swap(arr[i],arr[e]);
    return i;
}
void QuickSort(vector<int> &arr, int s, int e){
    if(s<e){
        int pvtInd = partition(arr,s,e);
        QuickSort(arr,s,pvtInd-1);
        QuickSort(arr,pvtInd+1,e);
    }
}
int main(){
    vector<int> arr = {8,5,4,9,3,7};
    QuickSort(arr,0,arr.size()-1);
    for(int values:arr){
        cout<<values<<" ";
    }
    return 0;
}