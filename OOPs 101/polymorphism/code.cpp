#include<iostream>
using namespace std;

class A{
    public:

    void func(int a,float b){
        cout<<"a= "<<a<<endl;
        cout<<"b= "<<b<<endl<<endl;
        
    }
    void func(float a,int b){
cout<<"a= "<<a<<endl;
        cout<<"b= "<<b<<endl<<endl;
    }

};


int main(){
    A obj1;

    obj1.func(5,5.55);
    obj1.func(6.66,6);


}
