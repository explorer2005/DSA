#include<iostream>
#include<list>
using namespace std;
class stack{
    list<int>ll;
    public:
    void push(int val){
        ll.push_front(val);
    }
    void pop(){
        cout<<ll.front()<<" ";
        ll.pop_front();
    }
    void top(){
        cout<<ll.front()<<endl;
    }
    bool full(){
        return ll.size()==0;
    }
};
int main(){
    stack s;
    s.push(80);
    s.top();
    s.push(90);
    s.top();
    s.push(100);
    s.top();
    s.push(110);
    s.top();
    cout<<endl<<endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    return 0;
}