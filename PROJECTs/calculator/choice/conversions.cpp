#include <iostream>
#include "/Users/macbookair/Desktop/test_Cpp/PROJECTs/calculator/take input/c.cpp"
using namespace std;

int C_choice(int z)
{

    switch (z)
    {
    case 1:
        cout << "\t\t\tinch → cm" << endl;
        c_input1();

        break;

    case 2:
        cout << "\t\t\tkm  → mile" << endl;
        c_input2();

        break;

    case 3:
        cout << "\t\t\tm³ → L" << endl;

        c_input3();

        break;
    case 4:
        cout << "\t\t\tPa → atm" << endl;
        c_input4();
        break;
    case 5:
        cout << "\t\t\tkW → hp" << endl;
        c_input5();
        break;

    case 6:
        cout << "\t\t\tcal(Thermodynamic) → J" << endl;
        c_input6();
        break;
    case 7:
        return 0;

        break;

    default:
        cout << "Invalid Input" << endl;
    }

    return 0;
}
