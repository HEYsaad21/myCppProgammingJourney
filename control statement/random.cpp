#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter three numbers:";
    cin>>a>>b>>c;
    if(a==b&&b==c){
       cout<<"Three numbers are equal";
    }
    else if(a>=b){
        if(a>=c){
            cout<<a<<" is the greatest number";
        }else{
            cout<<c<<" is the greatest number";
        }
    }
    else if(b>=a){
        if(b>=c){
            cout<<b<<" is the greatest number";
        }else{
            cout<<c<<" is the greatest number";
        }
    }

}
