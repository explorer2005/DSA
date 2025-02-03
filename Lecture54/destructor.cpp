#include<iostream>
using namespace std;
class Student{
    public:
    Student(){
        cout<<"I am parent constructor"<<endl;
    }
    ~Student(){
        cout<<"I am a parent destructor"<<endl;
    }
};
class Child:public Student{
    public:
    Child(){
        cout<<"I am child constructor"<<endl;
    }
    ~Child(){
        cout<<"I am child Destructor"<<endl;
    }
};
int main(){
    Student s;
    Child c;
}