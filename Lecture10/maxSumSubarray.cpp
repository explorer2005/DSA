// #include<iostream>
// #include<vector>
// #include<climits>
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
   
//     int number=0;
//     int max=INT_MIN;
//     cout<<"The subarrays are"<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int sum=0;
//             for(int k=j;k<n;k++){
//                 sum=sum+arr[k];
//                 cout<<arr[k]<<" ";
//                 if(sum>max){
//                     max=sum;
//                 }
//             }
//             number+=1;
//             cout<<endl;
//         }
//     }
//     cout<<"The number of arrays are: "<<number<<endl;
//     cout<<"The max is: "<<max<<endl;
//     return 0;
// }

//approach 2
#include<iostream>
#include<climits>
using namespace std;
int main(){
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    for(int start=0;start<n;start++){
        int curSum=0;
        for(int end=start; end<n;end++){
            curSum+=arr[end];
        }
        if(curSum>max){
            max=curSum;
        }
    }
    cout<<"The max value is: "<<max<<endl;
}
