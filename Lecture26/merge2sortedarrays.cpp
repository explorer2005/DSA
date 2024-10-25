#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size of the array 10"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the size of the array 2"<<endl;
    int m;
    cin>>m;
    int brr[m];
    cout<<"Enter the elements of the array 2"<<endl;
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }
    int index=n-1;
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            c=i;
            break;
        }
    }
    int j=m-1;
    while(index>=0){
        if(arr[c]>brr[j]){
            swap(arr[c],arr[index]);
            c--;
            index--;
        }
        else if(arr[c]<brr[j]){
            arr[index]=brr[j];
            index--;
            j--;
        }
    }
    cout<<"The sorted array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

//refer the leetcode there it has been done 
