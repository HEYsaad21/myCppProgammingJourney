#include <iostream>
using namespace std;

void display_initial(int array[], int size);
void reverse(int array[], int size);
void display_final(int array[], int size);

int main()
{
    int numbers[5] = {1, 2, 3, 4, 5};

    display_initial(numbers, 5);
}




void display_initial(int array[], int size)
{

    cout << "Given array: ";
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            cout << array[i];
        }
        else
        {
            cout << " , " << array[i];
        }
    }
    cout << endl;

    // passing the array;;
    reverse(array, 5);
}

void reverse(int array[], int size)
{

    int l = 0, r = size - 1;

    while (l <= r)
    {
        int swap = array[l];
        array[l] = array[r];
        array[r] = swap;
        l++, r--;
    }

    display_final(array, 5);
}

void display_final(int array[], int size)
{

    cout << "Reversed array: ";
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            cout << array[i];
        }
        else
        {
            cout << " , " << array[i];
        }
    }
    cout << endl;
}
