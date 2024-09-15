#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"Enter the letter"<<endl;
    cin>>a;
    
    if(a>=65&&a<=90){
        cout<<"Uppercase"<<endl;
    }
    else if(a>=97&&a<=122){
        cout<<"Lowercase"<<endl;
    }
    // else{
    //     cout<<"Enter the correct input"<<endl;
    // }
    return 0;
}