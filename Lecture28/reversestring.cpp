#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
    // cout<<"Enter the string to be reversed"<<endl;
    // string str;
    // getline(cin,str);
    // cout<<"The enetered string is"<<endl;
    // cout<<str<<endl;
    // cout<<"The reversed string is"<<endl;
    // for(int i=str.length();i>=0;i--){
    //     cout<<str[i];
    // }
    // cout<<endl;

    //by character array

    cout<<"Enter the string"<<endl;
    char ch[100];
    cin.getline(ch,100);
    cout<<"The entered string is"<<endl;
    cout<<ch<<endl;
    cout<<"The reversed array is"<<endl;
    int start=0;
    int end=strlen(ch)-1;
    while(start<=end){
        swap(ch[start],ch[end]);
        start++;
        end--;
    }
    cout<<"The reversed array is: "<<endl;
    cout<<ch<<endl;
    return 0;
}