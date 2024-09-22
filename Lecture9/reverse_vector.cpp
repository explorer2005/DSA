#include<iostream>
#include<vector>
using namespace std;
void revVector(vector<int> vec){
    int s=0;
    int e=vec.size()-1;
    while(s<e){
        swap(vec.at(s),vec.at(e));
        s++;
        e--;
    }
    cout<<"The reversed vector is"<<endl;
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
}
int main(){
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    vector<int> vec;
    cout<<"Enter the elements of the array"<<endl;
    int elements;
    for(int i=0;i<n;i++){
        cin>>elements;
        vec.push_back(elements);
    }
    revVector(vec);
    cout<<"The main function effect"<<endl;
       for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
}