#include<iostream>
using namespace std;
int main(){
    string s1= "aabchdjrik";
    string s2= "hdc";
    int fre[26]={0};
    for(int i=0;i<=s2.length()-1;i++){
        fre[i-'a']++;
    }
    int window = s2.length();
    int j=0;
     int fre2[26]={0};
    while(j<s1.length()){
       
        for(int k=0;k<s2.length();k++){
            fre2[k-'a']++;
        }
    }
    for(int m=0;m<26;m++){
        if(fre[m]==fre2[m]){
            continue;
        }
        else{
            cout<<"not found"<<endl;
            return 0;
        }
    }
    cout<<"Found"<<endl;
    return 0;
    
}