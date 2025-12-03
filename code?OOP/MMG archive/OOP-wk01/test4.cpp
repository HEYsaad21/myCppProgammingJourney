#include<iostream>
using namespace std;

namespace first {

int val1=500,z=2;

}
namespace first {

int val2=501,z=0; //// compilation error for same two var name

}
int main(){

cout<< first :: val1<<endl;
cout<< first :: val2<<endl;


}
