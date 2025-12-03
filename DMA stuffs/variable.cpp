#include<iostream>
using namespace std;
int main(){

    int a;
    cout<<"Enter a value: ";
    cin>>a;

   int *ptr= new int(a);

   cout<<"You have entered "<<*ptr<<" at memory address of "<<ptr<<endl;


    
}