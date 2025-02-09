#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(50);
    s.push(60);
    cout<<s.top();
    s.pop();
    cout<<s.top();
    s.pop();
    cout<<s.top();
    return 0;
}