#include<iostream>
#include<math.h>


using namespace std;
int main(){
    double a,b,c;
    cout<<"Enter one side of right angle triangle , a: ";
    cin>>a;
    cout<<"Enter another side of right angle triangle , b: ";
    cin>>b;

    c=sqrt(pow(a,2) + pow(b,2) );

    cout<<"The hypotenuse is: "<<c<<endl;
}