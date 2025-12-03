#include<iostream>
using namespace std;

class person{
    public:

    string name;
    int age;

    person(string name,int age){
        this->name=name;
        this->age=age;
    }


};
class student : public person{
    // name , age , roll

    public:

    int roll;

    student(string name, int age, int id) : person(name, age) {
        roll = id;
    }

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll: "<<roll<<endl<<endl;
        
    }


};

int main(){
    student s1("Sanzida", 21, 26);

    s1.getInfo();

}