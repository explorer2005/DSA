#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of books"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the numberofpages in each book"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number of students"<<endl;
    int m;
    cin>>m;
    if(m>n){
        cout<<"Its not possible"<<endl;
    }
    
    return 0;
}