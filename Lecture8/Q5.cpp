#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size of array 1"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elemets of the first array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the size of the second array"<<endl;
    int m;
    cin>>m;
    int brr[m];
    cout<<"Enter the elements of the second array"<<endl;
    for(int i=0;i<m;i++){
        cin>>brr[m];
    }
    
    if(m>n){
        for(int i=0;i<n;i++){
            int flag=0;
            for(int j=0;j<m;j++){
                if(brr[j]==arr[i]){
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                cout<<arr[i]<<" ";
            }
        }
    }
    else{
        for(int i=0;i<m;i++){
            int flag=0;
            for(int j=0;j<n;j++){
                if(brr[i]==arr[j]){
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                cout<<brr[i]<<" ";
            }
        }
    } 
    return 0;
}