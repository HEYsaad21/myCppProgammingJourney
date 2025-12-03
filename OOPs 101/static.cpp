#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void MYfunction(){
    static int x=0;   /// only be executed once
  x++;

  cout<<x<<endl;
}
class A{
    public:
    static int a ;

};

int main(){

MYfunction();
MYfunction();
MYfunction();

A a1,a2;
a1.a=50;
cout<<a1.a<<endl;

    return 0;
}