#include<iostream>
using namespace std;

int main(){
    long double n;
    cout<<"Enter  a number: ";
    cin>>n;

    if(n<0){
        cout<<"negative number detected!\n";
        n=abs(n);
    }

    int sum=0;
    long int rem,num=n;

    for(int i=0;num!=0;i++){
            rem=num%10;
            sum+=rem;
            num=num/10;
    }
    cout<<"Sum of digits "<<sum<<endl;

}