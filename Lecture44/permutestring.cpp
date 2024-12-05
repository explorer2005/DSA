#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void getp(vector<char> &arr, vector<vector<char>>& ans, int idx){
    if(idx==arr.size()){
        ans.push_back(arr);
        for(char ch:arr){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<endl;
    // }
    for(int i=idx; i<arr.size();i++){
        swap(arr[idx],arr[i]);
        getp(arr,ans,idx+1);
        swap(arr[idx],arr[i]);
    }
}
int main(){
    cout<<"Enter the length of the string"<<endl;
    int n;
    cin>>n;
    vector<char> arr;
    for(int i=0;i<n;i++){
        char va;
        cin>>va;
        arr.push_back(va);
    }
    vector<vector<char>> ans;
    getp(arr,ans,0);
}