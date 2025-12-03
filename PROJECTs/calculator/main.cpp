#include<iostream>
#include"display items/display.cpp"
using namespace std;

int main(){  
     int a;
    cout<<"\tCALCULATOR"<<endl;
    cout<<"1.Arithmetic"<<endl;
    cout<<"2.Trigonometric"<<endl;
    cout<<"3.Conversions"<<endl;
    cout<<"4.Exit"<<endl;

    cout <<"Enter your choice(1~4): ";

    cin>>a;
 
    switch(a){
        case 1:  arithmatic();


        break;
               
        case 2:  trigonometric();



        break;

        case 3:  conversions();




        break;

        case 4:      return 0;
        
        break;

        default :  cout<<"Invalid Input"<<endl;
    }

 

    return 0;
}