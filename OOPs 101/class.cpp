#include<iostream>
using namespace std;

class teacher{
    public:
    // properties or attributes
    string name;
    string dept;
    string subject;
    double salary;

    // methods or member functions

    void change_Dept_To(string newDept){
        dept=newDept;
    }
    void update_salary_To(double s){
        salary=s;
    }
    void printDetails(){
        cout<<"1.Name: "<<name<<endl;
        cout<<"2.Department: "<<dept<<endl;
        cout<<"3.Subject: "<<subject<<endl;
        cout<<"4.Salary: "<<salary<<endl<<endl;
    }



};


int main(){
    teacher t1;

    t1.name="Faisal Ahmed";
    t1.dept="CSE";
    t1.subject="C++";
    t1.salary=25000;

    t1.printDetails();

    t1.change_Dept_To("Software Engineering");
    t1.update_salary_To(30000);

    t1.printDetails();

    


}