#include<iostream>
using namespace std;

class person{
    public:

    string name;
    int age;
    int NID;

    // constructor  base class
    person(string name="",int age=-1,int NID=-1){
        this->name=name;
        this->age=age;
        this->NID=NID;

    }
};
class student : public person{
    public:

    int roll;
    string dept;
    float CG;

    // constructor , derived class
    student(string name="",int age=-1,int NID=-1,int roll=-1,string dept="",float CG=-1) : person(name,age,NID){
        this->roll=roll;
        this->dept=dept;
        this->CG=CG;

    }

};

int main(){
    student s1;

    cout<<s1.CG<<endl<<s1.NID<<endl;

}