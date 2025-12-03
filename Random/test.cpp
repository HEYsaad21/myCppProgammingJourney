#include<iostream>
using namespace std;


int main(){
    int x=10;
    const int y=20;    // constant variable cant be modified ;; // declaration + initialization must be done at same time

    x=15;
              //   error ::  y=25;

    cout<<"x= "<<x<<", y= "<<y<<endl;          

}

