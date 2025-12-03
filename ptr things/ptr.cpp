#include<iostream>
using namespace std;

int main(){
    int x=5;
    int *ptr;

    ptr=&x;

    cout<<"address of x: "<<ptr<<endl;
    cout<<"value at address of x: "<<*ptr<<endl;
}