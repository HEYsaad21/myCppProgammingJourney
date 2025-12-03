#include<iostream>
#include"/Users/macbookair/Desktop/test_Cpp/PROJECTs/calculator/take input/t.cpp"
using namespace std;


int  T_choice(int z){
switch(z){
        case 1:  cout<<"\t\t\tsinθ"<<endl;
        t_input1();


        break;
               
        case 2:  cout<<"\t\t\tcosθ"<<endl;
        t_input2();


        break;

        case 3:  cout<<"\t\t\ttanθ"<<endl;

        t_input3();




        break;
        case 4:      cout<<"\t\t\tcosecθ"<<endl;
                    t_input4();
        
        break;
        case 5:      cout<<"\t\t\tsecθ"<<endl;
                       t_input5();
        break;


        case 6:     cout<<"\t\t\tcotθ"<<endl;

                   t_input6();
        
        break;
        case 7:      return 0;
        
        break;

        default :  cout<<"Invalid Input"<<endl;
    }

return 0;
}

