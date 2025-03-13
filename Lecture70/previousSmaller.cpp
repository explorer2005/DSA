#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    stack<int> s;
    vector<int> v;
    vector<int> ans;
    cout<<"Enter the number  of elements for which the previous smaller is to be found"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elements of the vector"<<endl;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<n;i++){
        while(s.size()>0&&s.top()>=v[i]){
            s.pop();
        }
        if(s.size()==0){
            ans.push_back(-1);
        }
        else{
            ans.push_back(s.top());
        }
        s.push(v[i]);
    }
    cout<<"The ans is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ,";
    }
    return 0;
}