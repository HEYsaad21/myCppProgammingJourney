#include<iostream>
#include"/Users/macbookair/Desktop/test_Cpp/PROJECTs/calculator/take input/a.cpp"
using namespace std;

int  A_choice(int z){
switch(z){
        case 1:    // x+y
        cout<<"\t\t\tADDITION(a+b)"<<endl;
        a_input1();



        break;
               
        case 2:     // x-y
        cout<<"\t\t\tSUBTRACTION(a-b)"<<endl;
        a_input2();



        break;

        case 3:  // x*y
        cout<<"\t\t\tMULTIPLICATION(a*b)"<<endl;
        a_input3();




        break;

        case 4:       // x/y
        cout<<"\t\t\tDIVISION(a/b)"<<endl;
        a_input4();

        
        break;
        case 5:      return 0;
        
        break;

        default :  cout<<"Invalid Input"<<endl;
    }

    return 0;

}
