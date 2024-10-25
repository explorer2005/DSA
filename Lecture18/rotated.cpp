#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the rotated sorted array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched"<<endl;
    int k;
    cin>>k;
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=s-(s-e)/2;
        if(arr[mid]==k){
            return mid;
        }
        else{
            if(arr[mid]>=arr[s]){
                if(arr[mid]>=k && arr[s]<=k){
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }
            else{
                if(arr[mid]<=k&&arr[mid]>=k){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
        }
    }
    return 0;
}