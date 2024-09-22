#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"Enter the size of the elements"<<endl;
    int n;
    cin>>n;
    int j;
    cout<<"Enter the elements of the vector"<<endl;
    vector<int> vec;
    for(int i=0;i<n;i++){
        cin>>j;
        vec.push_back(j);
    }
    cout<<"The elements of the vector are"<<endl;
    for(int i=0;i<n;i++){
        cout<<vec.at(i)<<" ";
    }
    cout<<"Enter the element to be found"<<endl;
    int k;
    cin>>k;
    int flag=0;
    for(int val:vec){
        if(vec[val]==k){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"Element is found"<<endl;
    }
    else{
        cout<<"Element is not found"<<endl;
    }
    return 0;
}