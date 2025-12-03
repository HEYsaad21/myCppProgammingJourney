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
//void friend  printDetails(person *p=NULL,student *s=NULL,grad_student *gs=NULL);

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
//void friend  printDetails(person *p=NULL,student *s=NULL,grad_student *gs=NULL);


};
class grad_student : public student{
    public:

    string research_area;

    // constructor 

    grad_student(string name="",int age=-1,int NID=-1,int roll=-1,string dept="",float CG=-1,string research_area="") : student(name,age, NID,roll, dept, CG){
        this->research_area=research_area;
    }

//void friend  printDetails(person *p=NULL,student *s=NULL,grad_student *gs=NULL);

};

// void printDetails(person *p=NULL,student *s=NULL,grad_student *gs=NULL){

//     if( p != NULL){
//         cout<<"1.Name: "<<  ( p->name) <<endl;
//         cout<<"2.Age: "<< p->age<<endl;
//         cout<<"3.NID: "<<p->NID<<endl;

//     }
//     else if (s != NULL){
//         cout<<"1.Name: "<<  ( s->name) <<endl;
//         cout<<"2.Age: "<< s->age<<endl;
//         cout<<"3.NID: "<<s->NID<<endl;
//         cout<<"4.Roll: "<<s->roll<<endl;
//         cout<<"5.Dept: "<<s->dept<<endl;
//         cout<<"6.CG: "<<s->CG<<endl;

//     }else if(gs != NULL) {
//          cout<<"1.Name: "<<  ( gs->name) <<endl;
//         cout<<"2.Age: "<< gs->age<<endl;
//         cout<<"3.NID: "<<gs->NID<<endl;
//         cout<<"4.Roll: "<<gs->roll<<endl;
//         cout<<"5.Dept: "<<gs->dept<<endl;
//         cout<<"6.CG: "<<gs->CG<<endl;
//         cout<<"7.Research sector: "<<gs->research_area<<endl;


//     }

// }

int main(){
    grad_student g1;
    g1.name="Dr. Ahmed";
    g1.age=25;
    g1.NID=0123456;
    g1.dept="Computer Science";
    g1.CG=3.88;
    g1.roll=20;
    g1.research_area="Data Analysis";


// printDetails(NULL,NULL,&g1);
cout<<"NAME: "<<g1.name<<endl;
cout<<"AGE: "<<g1.age<<endl;
cout<<"NID: "<<g1.NID<<endl;
cout<<"DEPARTMENT: "<<g1.dept<<endl;
cout<<"ROLL: "<<g1.roll<<endl;
cout<<"CGPA: "<<g1.CG<<endl;
cout<<"RESEARCH FIELD: "<<g1.research_area<<endl;
   

}