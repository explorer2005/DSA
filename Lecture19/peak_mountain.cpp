// // here time complexity is O(n)
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter the elements in peak mountain element array"<<endl;
//     int n;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of the array"<<endl;
    
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i+1]<arr[i]){
//             cout<<"The peak element is: "<<i<<endl;
//             break;
//         }
//     }
//     return 0;
// }

// now with time complexity o(log(n))

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size of the peak array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=1;
    int e=n-2;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            cout<<"The peak element is: "<<mid<<endl;
            break;
        }
        else{
            if(arr[mid]>arr[mid-1]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
    }
    return 0;
}