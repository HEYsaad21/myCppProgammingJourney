#include<iostream>
using namespace std;

int main(){
    int N,n,N_,n_;
    cout<<"Enter two numbers:";
    cin>>N>>n;
    
    if(n>N){
        int swap=n;
        n_=N;
        N_=swap;
    }else{
        n_=n;
        N_=N;
    }

    while(n_!=0)
    {
        int rem=N_%n_;
        N_=n_;
        n_=rem;
    }



    
    int gcd=N_;
    int lcm=(n*N)/gcd;


    cout<<"GCD: "<<gcd<<" , LCM: "<<lcm<<endl;

    
}