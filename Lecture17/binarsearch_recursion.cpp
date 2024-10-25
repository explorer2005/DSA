#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> vec, int k, int st, int ed){

    while(st<=ed){
        int mid=st+(ed-st)/2;
        if(k<vec[mid]){
            binarySearch(vec,k,st,mid-1);
        }
        else if(k>vec[mid]){
            binarySearch(vec,k,mid+1,ed);
        }
        else{
            return mid;
        }
    }
    return -1;
    
}
int main(){
    vector<int> vec={-1,2,3,8,9};
    int target=8;
    int s=0;
    int e=vec.size()-1;
    cout<<binarySearch(vec,target,s,e)<<endl;
    return 0;
}