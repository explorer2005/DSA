#include<iostream>
using namespace std;
float min(float a, float b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}

int main(){
    cout<<"Enter the 2 numbers to be checked"<<endl;
    float a,b;
    cin>>a>>b;
    cout<<"The minimum number is:"<<min(a,b)<<endl;
    return 0;
}