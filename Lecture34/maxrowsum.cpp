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
    int max=INT_MIN;
for(int i=0;i<r;i++){
    int sum=0;
    for(int j=0;j<c;j++){
        sum=sum+arr[i][j];
    }
    if(sum>max){
        max=sum;
    }
}
cout<<"The max row sum is:"<<max<<endl;
    return 0;
}