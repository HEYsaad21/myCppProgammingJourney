#include<iostream>
using namespace std;


void c_input1(){     // inch to cm
   double a;
    cout<<"\t\tEnter value(inch): ";
    cin>>a;
    double cm=a*2.54;
    cout<<"\t\t\t\tRESULT IS: "<<cm<<" cm"<<endl;

     int k=0;
    cout<<"(press 1 to repeat 0 to quit): ";
    cin>>k;
    if(k==1){
        c_input1();
    }


}
void c_input2(){          // km to mile
    double a;
    cout<<"\t\tEnter value(km): ";
    cin>>a;
    double mile=a*0.621371;
    cout<<"\t\t\t\tRESULT IS: "<<mile<<" mile"<<endl;

    cout<<"(press 1 to repeat 0 to quit): ";


    int k=0;
    cin>>k;
    if(k==1){
        c_input2();
    }

    

}
void c_input3(){                //m cube to L
  double a;
    cout<<"\t\tEnter value(m³): ";
    cin>>a;
    double L=a*1000;

    cout<<"\t\t\t\tRESULT IS: "<<L<<" L"<<endl;

    int k=0;

    cout<<"(press 1 to repeat 0 to quit): ";
    cin>>k;
    if(k==1){
        c_input3();
    }


    

}
void c_input4(){                //Pa to atm
   double a;
    cout<<"\t\tEnter value(Pa): ";
    cin>>a;
    double atm=a/101325.0;
  
    cout<<"\t\t\t\tRESULT IS: "<<atm<<" atm"<<endl;

    cout<<"(press 1 to repeat 0 to quit): ";

    int k=0;
    cin>>k;
    if(k==1){
        c_input4();
    }

    

}
void c_input5(){             // kW to hp
    double a;
    cout<<"\t\tEnter value(kW): ";
    cin>>a;
    double hp=a*1.34102;
    cout<<"\t\t\t\tRESULT IS: "<<hp<<" hp"<<endl;

    int k=0;

    cout<<"(press 1 to repeat 0 to quit): ";
    cin>>k;
    if(k==1){
        c_input5();
    }

    

}
void c_input6(){           // Cal to J
    double a;
    cout<<"\t\tEnter value(Cal): ";
    cin>>a;
    double J=a*4.184;

    cout<<"\t\t\t\tRESULT IS: "<<J<<" J"<<endl;

    int k=0;
    cout<<"(press 1 to repeat 0 to quit): ";
    cin>>k;
    if(k==1){
        c_input6();
    }

    

}