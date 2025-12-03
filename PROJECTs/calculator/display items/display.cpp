#include<iostream>
#include"/Users/macbookair/Desktop/test_Cpp/PROJECTs/calculator/choice/arithmetic.cpp"
#include"/Users/macbookair/Desktop/test_Cpp/PROJECTs/calculator/choice/trigonometric.cpp"
#include "/Users/macbookair/Desktop/test_Cpp/PROJECTs/calculator/choice/conversions.cpp"
using namespace std;

void arithmatic (){ int z;
    cout<<"\t\tARITHMETIC"<<endl;
    cout<<"\t1.Addition"<<endl;
    cout<<"\t2.Subtraction"<<endl;
    cout<<"\t3.Multiplication"<<endl;
    cout<<"\t4.Division"<<endl;
    cout<<"\t5.Exit"<<endl;


    cout <<"\tEnter your choice(1~5): ";
    cin>>z;
     A_choice(z);

  


}

void trigonometric(){    int z;

    cout<<"\t\tTRIGONOMETRIC"<<endl;
    cout<<"\t1.sin"<<endl;                // symbol :: θ
    cout<<"\t2.cos"<<endl;
    cout<<"\t3.tan"<<endl;
    cout<<"\t4.cosec"<<endl;
    cout<<"\t5.sec"<<endl;
    cout<<"\t6.cot"<<endl;
    cout<<"\t7.Exit"<<endl;

    cout <<"\tEnter your choice(1~7): ";
    cin>>z;


 T_choice(z);


}

void conversions(){   int z;


    cout<<"\t\tCONVERSIONS"<<endl;
    cout<<"\t1.inch → cm"<<endl;            // symbol ::  →
    cout<<"\t2.km  → mile"<<endl;
    cout<<"\t3.m³ → L"<<endl;               // symbol :: m³
    cout<<"\t4.Pa → atm"<<endl;
    cout<<"\t5.kW → hp"<<endl;
    cout<<"\t6.cal(Thermodynamic) → J"<<endl;
    cout<<"\t7.Exit"<<endl;

    cout <<"\tEnter your choice(1~7): ";
    cin>>z;


  C_choice(z);


}