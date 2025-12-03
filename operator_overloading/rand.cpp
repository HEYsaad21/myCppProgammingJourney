#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class complx{
    int img;
    int real;
public:

complx() : img(0),real(0)
{

}
void ip(){
    cout<<"Inputs: ";cin>>real>>img;
}

complx operator + ( const complx &obj){
    complx temp;
    temp.real=real+obj.real;
    temp.img=img+obj.img;


    return temp;

}
complx operator - ( const complx obj){
    complx temp;

    temp.real= -obj.real+real;
    temp.img=-obj.img+img;



    return temp;
}
void output(){
    if(img>0){
        cout<<real<<"+"<<img<<"i";
    }else
    cout<<real<<" "<<img<<"i";
}

};

int main(){
    complx c1,c2,res, res1;

    cout<<"C1:  "; c1.ip();
    cout<<"C2:  "; c2.ip();

res= c1+c2;
res1=c2-c1;

res.output();
res1.output();

    return 0;
}