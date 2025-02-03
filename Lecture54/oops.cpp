#include<iostream>
using namespace std;
class Teacher{
    public:
    string name;
    string Department;

    Teacher(){
        this->name="NONE";
        this->Department="NONE";
    }
    Teacher(string name, string Department){
        this->name=name;
        this->Department=Department;
    }
    Teacher(Teacher &obj){
        this->name="NONE";
        this->Department=obj.Department;
    }
};
int main(){
    Teacher t1;
    Teacher t2("DHRUV","COMPUTER SCIENCE");
    Teacher t3(t2);
    cout<<t1.name<<endl;
    cout<<t2.name<<endl;
    cout<<t3.name<<endl;
    cout<<t2.name<<endl;

}