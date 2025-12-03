#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Series type: 1+2^2+3^3+4^4+5^5+......+n^n\n";
  long double sum=0;

    cout<<"Enter the value of n:";
    cin>>n;

    if(n<=0){
        cout<<"Invalid input\n";
    }else{
      
for(int i=1;i<=n;i++){
    sum+=pow(i,i);

}




    }
    cout<<"SUM : "<<sum<<endl;  
    }
    
