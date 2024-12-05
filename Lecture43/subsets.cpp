#include<iostream>
#include<vector>
using namespace std;
void printSub(vector<int>& arr, vector<int>& ans, int i){
    if(i==arr.size()){
        for(int val:ans){
            cout<<val<<" ";
        }
        cout<<endl;
        return;
    }
    ans.push_back(arr[i]);
    printSub(arr,ans,i+1);
    ans.pop_back();
    printSub(arr,ans,i+1);
}
int main(){
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    vector<int> arr;
    vector<int> ans;
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
       arr.push_back(val);
    }
    int j=0;
    printSub(arr,ans,j);
}