#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    cout<<"The size of the vector is: "<<vec.size()<<endl;
    vec.push_back(10);
    vec.push_back(11);
    vec.push_back(12);

    cout<<"The size of the vector is: "<<vec.size()<<endl;
    cout<<"The capacity of the vector is: "<<vec.capacity()<<endl;
}