#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the binary number"<<endl;
    int n;
    cin>>n;
    int power=1;
    int answer=0;
    int remainder=0;
    while(n>0){
        remainder=n%10;
        n=n/10;
        answer=answer+(remainder*power);
        power=power*2;
    }
    cout<<"The answer is: "<<answer<<endl;
}