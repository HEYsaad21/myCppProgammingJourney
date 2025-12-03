#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number for its factorial value: ";
    cin>>n;

     long double fact=1;
    if(n<0){
        cout<<"Invalid input\n";
    }else{
     for(int i=n;i>=1;i--){
        fact*=i;
    }
    cout<<n<<"! is "<<fact<<endl;
   
    }
    

}

