#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    
    cout<<"Enter the sizeof the array"<<endl;
    int n;
    cin>>n;
    vector<int> ans(n);
    int arr[n];
    cout<<"Enter the element os the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    stack<int>s;
    for(int i=n-1;i>=0;i--){
        while(s.size()>0&&(arr[i]>=s.top())){
            s.pop();
        }
        if(s.size()==0){
            ans[i]=-1;
        }else{
            ans[i]=s.top();
        }
        s.push(arr[i]);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}