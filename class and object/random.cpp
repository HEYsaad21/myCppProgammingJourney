#include <iostream>
using namespace std;

class students
{
public:
    int roll;
    float gpa;
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
    cout << "Roll: " << Atik.roll << endl;
    cout << "GPA: " << Atik.gpa << endl
         << endl;

    cout << "Suparna:\n";
    cout << "Roll: " << Suparna.roll << endl;
    cout << "GPA: " << Suparna.gpa << endl
         << endl;

    cout << "Robin:\n";
    cout << "Roll: " << Robin.roll << endl;
    cout << "GPA: " << Robin.gpa << endl
         << endl;
}