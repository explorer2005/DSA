#include<iostream>
using namespace std;
bool isArmstrong(int n){
    int ans=0;
    int k=n;
    int rem=0;
    while(k!=0){
        rem=k%10;
        ans=ans+(rem*rem*rem);
        k=k/10;
    }
    if(ans==k){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    cout<<"Enter the number to be checked"<<endl;
    int n;
    cin>>n;
    bool ans= isArmstrong(n);
    cout<<"ans"<<ans<<endl;
    return 0;
}