#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the string to be checked"<<endl;
    string ch;
    getline(cin,ch);
    int s=0;
    int e=ch.size()-1;
    int flag=0;
    while(s<=e){
        if(ch[s]==ch[e]){
            flag=1;
            s++;
            e--;
        }
        else{
            cout<<"Its not a palindrome"<<endl;
            break;
        }
    }
    if(flag==1){
        cout<<"Its a palindrome"<<endl;
    }
    return 0;
}