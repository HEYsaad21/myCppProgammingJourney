#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    double C, K, F;
    int s;
    cout << "\n\tTemperature Coverter\n"
         << endl;
    cout << "\t1.Celsius to Fahrenheit" << endl;
    cout << "\t2.Fahrenheit to Celsius" << endl;
    cout << "\t3.Celsius to Kelvin" << endl;
    cout << "\t4.Fahrenheit to Kelvin" << endl;
    cout << "\t5.Kelvin to Fahrenheit" << endl;

    cout << "\nEnter choice: ";
    cin >> s;

    switch (s)
    {
    case 1:
        cout << "Enter temperature(degree C): ";
        cin >> C;
        F = 1.8 * C + 32;
        cout << "In Fahrenheit scale : " << F << " degree F" << endl;
        break;

    case 2:
        cout << "Enter temperature(degree F): ";
        cin >> F;
        C = 0.556 * (F - 32);
        cout << "In Celsius scale : " << C << " degree C" << endl;
        break;

    case 3:
        cout << "Enter temperature(degree C): ";
        cin >> C;
        K = C + 273;
        cout << "In Kelvin scale : " << K << " Kelvin" << endl;
        break;

    case 4:
        cout << "Enter temperature(degree F): ";
        cin >> F;
        K = 273 + 0.556 * (F - 32);
        cout << "In Kelvin scale : " << K << " Kelvin" << endl;
        break;

    case 5:
        cout << "Enter temperature(Kelvin): ";
        cin >> K;
        F = 32 + 1.8 * (K - 273);
        cout << "In Fahrenheit scale : " << F << " degree F" << endl;
        break;

    default:
        cout << "Invalid input";
    }
}
