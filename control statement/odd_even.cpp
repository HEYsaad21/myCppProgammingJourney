#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter a number:";
    cin>>x;

    if(x==0){
        cout<<"The number is zero\n";
    }else if(x<0){
        cout<<"The number is negative\n";
    }else if(x>0){
        if(x%2==0){
            cout<<"The number is even\n";
        }else{
            cout<<"The number is odd\n";
        }
    }

}