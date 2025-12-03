#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Series type: 1+2+3+4+5+......+n\n";
    int sum=0;

    cout<<"Enter the value of n:";
    cin>>n;

    if(n<=0){
        cout<<"Invalid input\n";
    }else{
      for(int i=n;i>=1;i--){
        sum+=i;
    }
    cout<<"SUM : "<<sum<<endl;  
    }
    
}