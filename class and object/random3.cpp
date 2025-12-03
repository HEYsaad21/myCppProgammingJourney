#include <iostream>
using namespace std;

class students
{
public:
    int roll;
    float gpa;

    void display(void)
    {
        cout << "Roll: " << roll << endl
             << "GPA: " << gpa << endl
             << endl;
    }
    // void setValue(int x, float y)
    // {
    //     roll = x;
    //     gpa = y;
    // }


    //// constructor:  construction type :: parameterised

    students( int x, float y){
        roll=x,gpa=y;
    }

    //// constructor:  construction type :: default

    students (){
        cout<<"Default constructor"<<endl;
    }


};

int main()
{   
    // initialising objects with contruction   

    students Atik(10,3.5),Suparna(12,3.8);

    cout << "\n\tStudents Data:" << endl
         << endl;

    cout << "Atik:\n";
    
    Atik.display();

    cout << "Suparna:\n";
    
    Suparna.display();

    students Robin(14,3.65);

    cout << "Robin:\n";
   
    Robin.display();

    students object;

    
}