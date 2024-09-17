    //       1
    //     1 2 1
    //   1 2 3 2 1
    // 1 2 3 4 3 2 1
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the side of the pyramid"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<j+1;
        }
        int k=i;
        for(int j=0;j<i;j++){
            cout<<k;
            k--;
        }
        cout<<endl;
    }
    return 0;
}