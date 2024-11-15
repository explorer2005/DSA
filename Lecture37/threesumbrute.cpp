#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> truf;
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    set<vector<int>> s;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==0){
                    vector<int> ans={arr[i],arr[j],arr[k]};
                    sort(ans.begin(),ans.end());
                    if(s.find(ans)==s.end()){
                        s.insert(ans);
                        truf.push_back(ans);
                    }
                }
            }
        }
    }
    return truf;
}