#include<iostream>
using namespace std;

class parent{
    public:

    void show(){
        cout<<"Hello from parent class"<<endl;
    }

};

class child : public parent{
public:
 void show(){
        cout<<"Hello from child class"<<endl;
    }
};


int main(){
 
    child c;


    c.show();

}
