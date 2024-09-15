#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number to be checked"<<endl;
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<=n;i++){
        if(i%3==0){
            sum=sum+i;
        }
    }
    cout<<"The sum of the numbers divisible by 3 : "<<sum<<endl;
    return 0;
}