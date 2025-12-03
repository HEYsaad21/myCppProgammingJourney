#include <iostream>
using namespace std;

class students
{
public:
    int roll;
    float gpa;

    void display (void ){
        cout<<"Roll: "<<roll<<endl<<"GPA: "<<gpa<<endl<<endl;
    }
};

int main()
{
    students Atik, Suparna, Robin;

    Atik.roll = 10;
    Atik.gpa = 3.5;

    Suparna.roll = 12;
    Suparna.gpa = 3.8;

    Robin.roll = 14;
    Robin.gpa = 3.65;

    cout << "\n\tStudents Data:" << endl
         << endl;

    cout << "Atik:\n";
    Atik.display();
    
    
    cout << "Suparna:\n";
    Suparna.display();
    
    cout << "Robin:\n";
    Robin.display();
}