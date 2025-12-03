#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number:";
    cin>>x;

    if(x>0){
        cout<<x<<" is a positive number\n";
    }
    else if(x<0){
        cout<<x<<" is a negative number\n";
    }else{
        
            cout<<x<<" is zero\n";
        
    }
}