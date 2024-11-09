#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the string to be reversed"<<endl;
    string tell;
    getline(cin,tell);
    cout<<"The reversed string is as follows"<<endl;
    int i=0;
    while(i<=tell.length()/2){
        swap(tell[i],tell[tell.length()-1-i]);
        i++;
    }
    cout<<tell<<endl;
    return 0;
}