#include<iostream>
using namespace std;

void swap(int *a, int *b){
int temp=*a;
*a=*b;
*b=temp;
}

int main(){

int x=5,y=3;
int *xptr=&x,*yptr=&y;

cout<<"before swap :" << endl;
cout<<"x= "<<x<<", y= "<<y<<endl;

swap(xptr,yptr);

cout<<"after swap :" << endl;
cout<<"x= "<<x<<", y= "<<y<<endl;



    
}