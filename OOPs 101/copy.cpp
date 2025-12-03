#include<iostream>
using namespace std;

class student{

    string name;
    string dept;
    int id;

    public:

     student (const student &obj){
        cout<<"Hello im custom copy cons"<<endl;
        this->name=obj.name;
        this->dept=obj.dept;
        this->id=obj.id;

    }

    student(string name="",string dept="CSE",int id=-1){
        this->name=name;
        this->dept=dept;
        this->id=id;
    }
    void printInfo(){
        cout<<"Name: "<<name<<endl<<"Dept: "<<dept<<endl<<"ID: "<<id<<endl<<endl;

    }
    student getInfo(student s){
        return s;
    }

};

int main(){
    student s1("Name","CSE",22);

    student s2(s1);

    s2.printInfo();

    

   
  


}