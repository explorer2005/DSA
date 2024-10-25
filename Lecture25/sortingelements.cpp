// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter the size of the array"<<endl;
//     int n;
//     cin>>n;
//     cout<<"Enter the elements of the array"<<endl;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>=arr[j]){
//             swap(arr[i],arr[j]);
//             }
//         }
//     }
//     cout<<"Sorted array is"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//optimised 
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter the size of array"<<endl;
//     int n;
//     cin>>n;
//     cout<<"Enter the elements of the array"<<endl;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int co0=0;
//     int co1=0;
//     int co2=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             co0++;
//         }
//         else if(arr[i]==1){
//             co1++;
//         }
//         else{
//             co2++;
//         }
//     }
//     for(int i=0;i<co0;i++){
//         arr[i]=0;
//     }
//         for(int i=co0;i<(co0+co1);i++){
//         arr[i]=1;
//     }
//         for(int i=0+co0+co1;i<n;i++){
//         arr[i]=2;
//     }
//     cout<<"The sorted array is: "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0;
    int h=n-1;
    int mid=0;
    while(mid<=h){
        if(arr[mid]==0){
            swap(arr[l],arr[mid]);
            mid++;
            l++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[h],arr[mid]);
            h--;
        }
    }
    cout<<"The sorted array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}