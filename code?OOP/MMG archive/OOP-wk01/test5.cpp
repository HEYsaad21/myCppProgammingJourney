#include<iostream>

using namespace std;

namespace first{
void display(){

cout<<"Welcome to earth";
}
             }
namespace second{
void display(){

cout<<"Welcome to mars";
}
             }

int main(){



display();   // undeclared display func  ''''

second:: display();



}
