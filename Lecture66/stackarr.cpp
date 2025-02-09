#include<iostream>
using namespace std;
class stack{
    int topIndex;
    int arr[100];
    public:
    stack(){
        topIndex=-1;
    }
    bool isFull(){
        return topIndex==99;
    }
    bool isEmpty(){
        return topIndex==-1;
    }
    void push(int val){
        if(!isFull()){
            arr[++topIndex]=val;
        }
    }
    void pop(){
        cout<<arr[topIndex]<<" ";
        topIndex--;
    }
    void peek(){
        cout<<arr[topIndex]<<endl;
    }
};
int main(){
    stack s;
    s.push(50);
    s.peek();
    s.push(60);
    s.peek();
    s.push(70);
    s.peek();
    s.push(80);
    s.peek();

    cout<<endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    return 0;
}