#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Series type: 1.5+2.5+3.5+4.5+5.5+......+n.5\n";
    int sum=0;

    cout<<"Enter the value of n:";
    cin>>n;

    if(n<=0){
        cout<<"Invalid input\n";
    }else{
      for(int i=1;i<=n;i++){
        sum+=i*5;
      }




    }
    cout<<"SUM : "<<sum<<endl;  
    }
    
