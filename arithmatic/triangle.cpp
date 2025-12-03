#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float b,h;
    cout<<"Enter the base:";
    cin>>b;
    cout<<"Enter the height:";
    cin>>h;

    double area=0.5*b*h;

    cout<<showpoint<<fixed<<setprecision(4);
    cout<<setw(20)<<"Area of Triangle:"<<area<<endl;


}