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
    cout<<"All the 2 digits array are"<<endl;
    int max=1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            cout<<arr[i]<<" "<<arr[j]<<": "<<min(arr[i],arr[j])*(j-i)<<endl;
            int product=min(arr[i],arr[j])*(j-i);
            if(product>max){
                max=product;
            }
        }
    }
    cout<<"The max is: "<<max<<endl;
    return 0;
}
//better is 2 pointer approach leetcode 11
