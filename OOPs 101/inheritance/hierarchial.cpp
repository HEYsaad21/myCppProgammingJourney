#include <iostream>
using namespace std;

class person
{
public:
    int age;
    string name;
};
class teacher : public person
{
public:
    string subject;
    double salary;
};
class student : public person
{
public:
    string dept;
    int ID;
};

int main()
{
    teacher t1;
    student s1;
    


}