
#include<iostream>

using namespace std;

namespace CelsiusSpace{

 double ConverToKelvin(double c){

return c+273.15;
}
}
namespace FahrenheitSpace{

double ConverToKelvin(double f){

double res= (5.0/9)*(f-32) +273.15;

return res;
}
}

int main(){
double c,f;


cout<<"Input:"<<endl;
cout<<"Enter temperature in Celsius: ";
cin>>c;
cout<<"Enter temperature in Fahrenheit: ";
cin>>f;

cout<<"Output: "<<endl;

cout<<"Temperature in Kelvin from Celsius input:  "<<CelsiusSpace::ConverToKelvin(c)<<"K"<<endl;
cout<<"Temperature in Kelvin from Fahrenheit input:  "<<FahrenheitSpace::ConverToKelvin(f)<<"K"<<endl;



if(CelsiusSpace::ConverToKelvin(c) < FahrenheitSpace::ConverToKelvin(f)){
            cout<<"The Fahrenheit temperature is hotter in Kelvin scale.";
}else if(CelsiusSpace::ConverToKelvin(c) > FahrenheitSpace::ConverToKelvin(f)){

  cout<<"The Celsius temperature is hotter in Kelvin scale.";

}else{

cout <<"Both temperature is equal in Kelvin scale";
}


cout<<endl<<endl;
















}
