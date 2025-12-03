
#include<iostream>

using namespace std;

int mynum=10;

void func(){
    cout<<mynum<<endl;
}

int main(){

/*int mynum=20;  (can be modified even if in the Global variable , 
but remain same inside other funcs)
*/

int mynum=20;
cout<<mynum<<" , global one : "<<::mynum<<endl;
func();

    
}