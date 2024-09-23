// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter the number of elements"<<endl;
//     int n;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of the array"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int k= (n/2);
   
//     for(int i=0;i<n;i++){
//          int count=1;
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//         }
//         if(count>k){
//             cout<<"The majority element is: "<<arr[i]<<endl;
//             break;
//         }
//     }
//     return 0;
// }

//better approach sorting
//Moree's

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of elements"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int fre=1;
    int ans=arr[0];
    for(int i=1;i<n;i++){
        if(ans==arr[i]){
            fre++;
        }
        else{
            ans=arr[i];
            fre--;
        }
        
    }
    cout<<"The majority element is: "<<ans<<endl;
}