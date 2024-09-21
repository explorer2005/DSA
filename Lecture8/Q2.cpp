#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int  sum=0;
    int product=1;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        product=product*arr[i];
    }
    cout<<"The sum of the array is: "<<sum<<endl;
    cout<<"The product of the array is: "<<product<<endl;
    return 0;
}