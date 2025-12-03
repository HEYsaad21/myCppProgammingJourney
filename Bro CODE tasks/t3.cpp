#include<iostream>
using namespace std;

int main(){ int z=1,k;

    double balance=6000;

    while(z==1){

cout<<"\n1.Show Balance"<<endl;
cout<<"2.Deposite Money"<<endl;
cout<<"3.Withdraw Money"<<endl;
cout<<"4.Exit"<<endl;
cout<<"*******************"<<endl;


cout<<"Enter your option(1~4): ";
cin>>k;



switch (k)
{
    case 1:
    cout<<"Your Balance "<<balance <<"$"<<endl;
    cout<<"Press 1 to proceed and 0 to end: ";
    cin>>z;

    break;

    case 2: 
    double A;
    cout<<"Enter the amount($): ";
    cin>>A;
    
    balance+=A;

    cout<<"Current amount: "<<balance<<"$"<<endl;
    cout<<"Press 1 to proceed and 0 to end: ";
    cin>>z;

    
    break;

    case 3:
    double B;
    cout << "Enter the amount of withdraw($): ";
    cin>>B;
    balance -=B;
    cout<<"Current amount: "<<balance<<"$"<<endl;
    
    cout<<"Press 1 to proceed and 0 to end: ";
    cin>>z;

    break;
    case 4:
    z=0;
    break;


default:
    cout<<"Invalid input\n";
}


    }cout<<"Bank closed!"<<endl;


    
}