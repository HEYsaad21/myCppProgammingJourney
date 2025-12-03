#include<iostream>
using namespace std;


namespace myCalc{

namespace add{

double addition(double a , double b){
 return a+b;

}
}

namespace sub{

double subtraction(double a , double b){
 return a-b;

}
}

namespace mul{

double multiplication(double a , double b){
 return a*b;

}
}

}
int main(){

double x,y;


cout<<"Enter a number :";
cin>>x;
cout<<"Enter another number :";
cin>>y;


cout<<"Addition: "<<myCalc::add::addition(x,y)<<endl;
cout<<"Subtraction: "<<myCalc::sub::subtraction(x,y)<<endl;
cout<<"Multiplication: "<<myCalc::mul::multiplication(x,y)<<endl;













}
