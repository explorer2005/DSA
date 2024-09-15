#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int n=5;
    int i=1;
    // for(int i=0;i<=n;i++){
    //     if(i%2!=0){
    //         sum=sum+i;
    //     }
    // }
    // cout<<"The sum is: "<<sum<<endl;

    // for(int i=0;i<=n;i++){
    //     if(i%2==0){
    //         continue;
    //     }
    //     else{
    //         sum=sum+i;
    //     }
    // }
    // cout<<"The sum is: "<<sum<<endl;

    while(i<=n){
        if(i%2!=0){
            sum=sum+i;
            i++;
        }
    }
    cout<<"The sum is: "<<sum<<endl;
    return 0;
}