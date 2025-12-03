#include<iostream>

using namespace std;

void a_input1(){
  
    double a,b;
    cout<<"\t\tEnter a: ";
    cin>>a;
    cout<<"\t\tEnter b: ";
    cin>>b;

    double sum=a+b;
    cout<<"\t\t\t\tRESULT IS: "<<sum<<endl;
      int k=0;
    cout<<"(press 1 to repeat 0 to quit ): ";
    cin>>k;
    if(k==1){
        a_input1();
    }

    

}void a_input2(){
    double a,b;
    cout<<"\t\tEnter a: ";
    cin>>a;
    cout<<"\t\tEnter b: ";
    cin>>b;
    double sub=a-b;
    cout<<"\t\t\t\tRESULT IS: "<<sub<<endl;

     int k=0;
    cout<<"(press 1 to repeat 0 to quit): ";
    cin>>k;
    if(k==1){
        a_input2();
    }



}void a_input3(){
    double a,b;
    cout<<"\t\tEnter a: ";
    cin>>a;
    cout<<"\t\tEnter b: ";
    cin>>b;
    double mul=a*b;
    cout<<"\t\t\t\tRESULT IS: "<<mul<<endl;

     int k=0;
    cout<<"(press 1 to repeat 0 to quit): ";
    cin>>k;
    if(k==1){
        a_input3();
    }



}void a_input4(){
    double a,b;
    cout<<"\t\tEnter a: ";
    cin>>a;
    cout<<"\t\tEnter b: ";
    cin>>b;

    double div=a/(double)b;
    cout<<"\t\t\t\tRESULT IS: "<<div<<endl;

     int k=0;
    cout<<"(press 1 to repeat 0 to quit): ";
    cin>>k;
    if(k==1){
        a_input4();
    }

}