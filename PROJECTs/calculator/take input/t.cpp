#define PI 3.14159265358979323846
#include<iostream>
#include<cmath>
using namespace std;

double RPD=PI/180;


void t_input1(){     // symbol :: θ
    double a;
    cout<<"\t\tEnter θ (degree): ";
    cin>>a;
    double Sine=sin(a*RPD);
    
  cout<<"\t\t\t\tRESULT IS: "<<Sine<<endl;
    
  
    int k=0;
    cout<<"(press 1 to repeat 0 to quit): ";
    cin>>k;
    if(k==1){
        t_input1();
    }  

}

void t_input2(){     // symbol :: θ
   double a;
    cout<<"\t\tEnter θ (degree): ";
    cin>>a;
    double Cosine=cos(a*RPD);
    cout<<"\t\t\t\tRESULT IS: "<<Cosine<<endl;
    

    int k=0;
    cout<<"(press 1 to repeat 0 to quit): ";
    cin>>k;
    if(k==1){
        t_input2();
    }
}

void t_input3(){     // symbol :: θ
   double a;
    cout<<"\t\tEnter θ (degree): ";
    cin>>a;
    double Tan=tan(a*RPD);
    cout<<"\t\t\t\tRESULT IS: "<<Tan<<endl;
    

    int k=0;
    cout<<"(press 1 to repeat 0 to quit): ";
    cin>>k;
    if(k==1){
        t_input3();
    }
}

void t_input4(){     // symbol :: θ
   double a;
    cout<<"\t\tEnter θ (degree): ";
    cin>>a;
    double Sine=sin(a*RPD);
    
  cout<<"\t\t\t\tRESULT IS: "<< 1.0/Sine<<endl;
    
    

    int k=0;
    cout<<"(press 1 to repeat 0 to quit): ";
    cin>>k;
    if(k==1){
        t_input4();
    }
}

void t_input5(){     // symbol :: θ
   double a;
    cout<<"\t\tEnter θ (degree): ";
    cin>>a;
    double Cosine=cos(a*RPD);
    cout<<"\t\t\t\tRESULT IS: "<<1.0/Cosine<<endl;
    
    
    int k=0;
    cout<<"(press 1 to repeat 0 to quit): ";
    cin>>k;
    if(k==1){
        t_input5();
    }

}

void t_input6(){     // symbol :: θ
 double a;
    cout<<"\t\tEnter θ (degree): ";
    cin>>a;

    double Tan=tan(a*RPD);
    cout<<"\t\t\t\tRESULT IS: "<< 1.0/Tan <<endl;





    int k=0;
    cout<<"(press 1 to repeat 0 to quit): ";
    cin>>k;
    if(k==1){
        t_input6();
    }

    

}

