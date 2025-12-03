#include<iostream>
using namespace std;

int main(){
    long int rem,n;
    cout<<"Enter a number: ";
    cin>>n;


 
    long  int num=n;
    cout<<"\nReversed number: ";
    for(int i=0;num!=0;i++){
            rem=num%10;
            cout<<rem;
            num=num/10;

    }cout<<endl;
}