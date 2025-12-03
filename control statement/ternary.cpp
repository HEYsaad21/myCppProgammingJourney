#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a number:";
    cin>>a;
     if(a>0){
        (a%2==0)?cout<<"EVEN":cout<<"ODD";
     }

     else if(a<=0){
        cout<<"INVALID INPUT";
     }

}