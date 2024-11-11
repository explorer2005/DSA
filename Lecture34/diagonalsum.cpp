#include<iostream>
#include<climits>
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
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==j){
                sum=sum+arr[i][j];
            }
            else if(j==r-1-i){
                sum=sum+arr[i][j];
            }
        }
    }
    cout<<"The diagonal sum is"<<sum<<endl;

    return 0;
}