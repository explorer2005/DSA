#include<iostream>
#include<vector>
using namespace std;
class stack{
    public: 
    vector<int> s;
    void push(int val){
        s.push_back(val);
    }
    void pop(){
        cout<<s[s.size()-1]<<endl;
        s.pop_back();
    }
    void top(){
        cout<<s[s.size()-1]<<endl;
    }
    bool isEmpty(){
        return s.empty();
    }
};
int main(){
    stack s;
    s.push(30);
    s.top();
    s.push(40);
    s.top();
    s.push(50);
    s.top();
    s.push(60);
    s.top();
    cout<<endl<<endl<<endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    return 0;
}