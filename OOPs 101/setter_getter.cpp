#include<iostream>
using namespace std;

class teacher{
  private:
    // properties or attributes
    string name;
    string dept;
    string subject;
    double salary;

    // methods or member functions
    public:

    void setName(string n){
        name=n;

    }void setDept(string d){
        dept=d;

    }void setSub(string s){
        subject=s;
    }void setSalary(double sa){
        salary=sa;
    }

    string getName(){
       return name;

    }string getDept(){
        return dept;

    }string getSub(){
        return subject;
    }double  getSalary(){
        return salary;
    }



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

    t1.setName("Saad");
    t1.setDept("CSE");
    t1.setSub("MATHEMATICS");
    t1.setSalary(20000);

    t1.printDetails();

    t1.change_Dept_To("Software Engineering");
    t1.update_salary_To(30000);

    t1.printDetails();

    


}