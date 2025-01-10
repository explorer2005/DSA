#include<iostream>
using namespace std;
void CountInversion(int arr[]){
    int count=0;
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if(arr[i]>arr[j]){
                count++;
            }
        }
    }
    cout<<"The ans is: "<<count<<endl;
}
int main(){
    int arr[8]={1,3,5,10,2,6,8,9};
    CountInversion(arr);
    return 0;
}