#include<iostream>
#include<math.h>
using namespace std;

namespace SquareSpace{
    double area(double  side){
        return side*side;
    }

}
namespace CircleSpace{
    double area(double radius){
        return 3.1416*radius*radius;
    }

}
namespace TriangleSpace

{     

    namespace Area{
double area(int a,int b,int c){
        double s=(a+b+c)/2.00;
       return sqrt(s*(s-a)*(s-b)*(s-c));
    }
    }

    namespace Perimeter{

double perimeter(int a,int b,int c){
    return a+b+c;
}
    }
    





} // namespace TriangleSpace



int main(){
    double side,radius;
    cout<<"Enter the side of square: ";
    cin>>side;

 cout<<"Enter the radius of circle: ";
    cin>>radius;

cout<<"Area of square "<< SquareSpace::area(side)<<" sq unit"<<endl;
cout<<"Area of circle "<< CircleSpace::area(radius)<<" sq unit"<<endl;



double a,b,c;

cout<<"Enter a arm of triangle: ";
cin>>a;


cout<<"Enter b arm of triangle: ";
cin>>b;


cout<<"Enter c arm of triangle: ";
cin>>c;

cout<<"Area of triangle: "<<TriangleSpace::Area::area(a,b,c)<<" sq unit"<<endl;
cout<<"Perimeter of triangle: "<<TriangleSpace::Perimeter::perimeter(a,b,c)<<" unit"<<endl;



}

