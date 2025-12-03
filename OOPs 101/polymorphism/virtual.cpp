#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class parent
{
public:
    virtual void show()
    {
        cout << "Hello from parent class" << endl;
    }
};
class child : public parent
{
public:
    void show()
    {
        cout << "Hello from child class" << endl;
    }
};

int main()
{

    return 0;
}
