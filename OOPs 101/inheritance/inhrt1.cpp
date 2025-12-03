#include<iostream>
using namespace std;
class A{
    protected:
    int a;
    float b;
    bool c;

    public:
    A(int a=0,float b=0.00,bool c=false){
        this->a=a;
        this->b=b;
        this->c=c;
    }

};
class B : public A{
    // protected
    double d;

    public:

    B(int a=0,float b=0.00,bool c=false,double d=0.0) : A(a,b,c){
        this->c=c;

    }

    void showDetails(){
        cout<<"a= "<<a<<endl<<"b= "<<b<<endl<<"c= "<<c<<endl<<"d= "<<d<<endl<<endl;

    }


};

int main(){

    B b1(5,0,1,0);
    
    b1.showDetails();

}