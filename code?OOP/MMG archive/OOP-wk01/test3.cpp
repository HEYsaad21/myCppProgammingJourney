#include<iostream>
using namespace std;

namespace myspace{

void display(){
cout<<"Hello from Display1"<<endl;
}

}

void display(){
cout<<"Hello from Display2"<<endl;
}


int main(){


display();

myspace :: display();



}

