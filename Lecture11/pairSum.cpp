// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;
// int main(){
//     cout<<"Enter the number of elements in the array"<<endl;
//     int n;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of the array"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"Enter the number to be found"<<endl;
//     int k;
//     cin>>k;
//     for(int i=0;i<n;i++){
        
//         for(int j=i+1;j<n;j++){
//             int curSum=arr[i];
//             curSum+=arr[j];
//             if(curSum==k){
//                 cout<<"Elements at the following index satisfies the condition: "<<i<<" "<<j<<endl;
//             }
//         }
//     }
//     return 0;
// }

//optimal solution

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> ans;
    vector<int> vec={2,7,11,15};
    cout<<"Enter the number to be searched"<<endl;
    int k;
    cin>>k;
    int i=0;
    int j=vec.size()-1;
    while(i<j){
        if(vec[i]+vec[j]<k){
            i++;
        }
        else if(vec[i]+vec[j]>k){
            j--;
        }
        else{
            ans.push_back(vec[i]);
            ans.push_back(vec[j]);
            break;
        }
    }
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}