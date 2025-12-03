#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int roll;

};
class teacher{
    public:

    double salary;
    string subject;

};

class TA : public student , public teacher{       // stu+tea ----> TA

};

int main(){
    TA t1;
    t1.name="Tony Stark";
    t1.roll=99;
    t1.salary=25000;
    t1.subject="Quantum Physics";


    cout<<t1.name<<endl;
    cout<<t1.roll<<endl;
    cout<<t1.salary<<endl;
    cout<<t1.subject<<endl;

}