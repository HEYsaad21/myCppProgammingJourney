#include <iostream>
using namespace std;

class person
{
};
class student : public person
{
};
class grad_student : public student 
{

};

class teacher : public person
{
};
class TA : public student , public teacher
{
};

int main()
{
}