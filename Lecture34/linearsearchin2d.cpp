#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the no of rows and columns respectively"<<endl;
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    cout<<"Enter the elements of the matrix"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The entered matrix is"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Enter the element to be searched"<<endl;
    int k;
    cin>>k;
    int flag=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==k){
                flag=1;
                break;
            }
        }
    }
    if(flag==0){
        cout<<"The element not found"<<endl;
    }
    else{
        cout<<"The element is found at the index "<<r<<"&"<<c<<endl;
    }
    return 0;
}