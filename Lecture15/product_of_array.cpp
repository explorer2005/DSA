// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter the sizeof the array"<<endl;
//     int n;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elementsof the array"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"The product array is:"<<endl;
//     for(int i=0;i<n;i++){
//         int product=1;
//         for(int j=0;j<n;j++){
//             if(arr[i]==arr[j]){
//                 continue;
//             }
//             else{
//                 product*=arr[j];
//             }
//         }
//         cout<<product<<" ";
//     }
//     return 0;
// }

//new approach but issue is if 0 is there in given array
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter the size of the array"<<endl;
//     int n;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of the array"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int product=1;
//     for(int i=0;i<n;i++){
      
//         product*=arr[i];
//     }
    
//     cout<<"The product array is"<<endl;
//     int ans=0;
//     for(int i=0;i<n;i++){
//         ans=product/arr[i];
//         cout<<ans<<" ";
//     }
// }

//approach using linear time complexity
//leetcode 238