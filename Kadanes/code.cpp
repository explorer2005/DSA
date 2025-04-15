#include<iostream>
#include<climits>
using namespace std;
void kadanes(int *arr,int n){
    int sum=0;
    int ansStart=0;
    int ansEnd=0;
    int maxi=INT_MIN;
    int start=0;
    for(int i=0;i<n;i++){
        if(sum==0) start=i;
        sum+=arr[i];
        if(sum>maxi){
            maxi=sum;
            ansStart=start;
            ansEnd=i;
        }
        if(sum<0){
            sum=0;
        }
    }
    cout<<"Start Index is: "<<ansStart<<"End Index is: "<<ansEnd<<endl;
    cout<<maxi<<endl;
}
int main(){
    cout<<"Enter the number of elements to be present in the array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The maximum array sum is: "<<endl;
    kadanes(arr,n);
}