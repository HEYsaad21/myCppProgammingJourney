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
    void setValue(int x, float y)
    {
        roll = x;
        gpa = y;
    }
};

int main()
{
    students Atik, Suparna, Robin;

    cout << "\n\tStudents Data:" << endl
         << endl;

    cout << "Atik:\n";
    Atik.setValue(10, 3.5);
    Atik.display();

    cout << "Suparna:\n";
    Suparna.setValue(12, 3.8);
    Suparna.display();

    cout << "Robin:\n";
    Robin.setValue(14, 3.65);
    Robin.display();
}