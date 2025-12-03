#include<iostream>
using namespace std;

class student{

    string name;
    string dept;
    int id;

    public:

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
    student s1("Sanzida","CSE",26);
    // s1.printInfo();

   student temp = s1.getInfo(s1);

   temp.printInfo();
  


}