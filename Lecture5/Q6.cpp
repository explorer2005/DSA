#include<iostream>
using namespace std;
// int fibonacci(int a){
//     int sum=0;
//     if(a==1){
//         sum=0;
//     }
//     else if(a==2){
//         sum=1;
//     }
//     else{
//         sum=fibonacci(a-2)+fibonacci(a-1);
//     }
//     return sum;
// }
// int main(){
//     cout<<"Enter the number of fibonacci to be found"<<endl;
//     int n;
//     cin>>n;
//     cout<<"The fibonacci number is"<<fibonacci(n)<<endl;
//     return 0;
// }
int fibonacci(int a){
    int i=0;
    int j=1;
    int sum=0;
    for(int k=0;k<a-2;k++){
        sum=i+j;
        i=j;
        j=sum;
    }
    return sum;
}
int main(){
    cout<<"Enter the number to be found"<<endl;
    int n;
    cin>>n;
    cout<<"The answer is: "<<fibonacci(n)<<endl;
    return 0;
}