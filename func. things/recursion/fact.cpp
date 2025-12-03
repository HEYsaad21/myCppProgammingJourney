#include<iostream>
using namespace std;

long double  fact (long double n){
    if(n==1){
        return 1;
    }else{
        return n*fact(n-1);
    }
}

int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;

    cout<<n<<"! is :"<<fact(n)<<endl;

}