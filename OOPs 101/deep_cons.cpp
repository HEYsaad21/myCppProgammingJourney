#include<iostream>
using namespace std;

class student{
    public:

    string name;
    string dept;
    int *id;

  
  // copy cons
     student (const student &obj){
        this->name=obj.name;
        this->dept=obj.dept;
        id=new int ;    // new memory for new obj
        *id=*obj.id;     // id of copy obj =id for obj

    }~student(){
        
        delete id;
      

    }

    student(string name="",string dept="CSE",int ID= -1){
        this->name=name;
        this->dept=dept;
       id = new int;
         *id= ID;

    }
    void printInfo(){
        cout<<"Name: "<<name<<endl<<"Dept: "<<dept<<endl<<"ID: "<<*id<<endl<<endl;

    }
    student getInfo(student s){
        return s;
    }

};

int main(){
    student s1("Augustin","CS",33);

  
    student s2(s1);
   s2.name="Hazel Grace";
   *(s2.id)=99;   // value assignment ,  
                // if deep copy is not written then s1 also shows same value ..

    s2.printInfo();
    s1.printInfo();

    

   
  


}