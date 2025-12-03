#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            cout << i << "," << j << endl;
            if (i == 2)
            {
                break;
            }
        }

        if (i == 2)
        {
            cout << "Here am I!\n";
        }
    }

    cout << "\nList of evens:\n";
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }
        cout << i << endl;
    }
}