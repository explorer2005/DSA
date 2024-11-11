#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of elements in the array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number of which the sum is to be found"<<endl;
    int s;
    cin>>s;
    for(int i=0;i<n;i++){
        int sum=arr[i];
        for(int j=i+1;j<n;j++){
            sum=sum+arr[j];
            if(sum==s){
                cout<<"Targets are at the index "<<i<<"&"<<j<<endl;
                break;
            }
            else{
                sum=arr[i];
            }
        }
    }
    return 0;
}