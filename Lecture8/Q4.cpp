#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The unique elements are"<<endl;
    for(int i=0;i<n;i++){
        int flag=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                flag=0;
                break;
            }
        }
        if(flag==1){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}