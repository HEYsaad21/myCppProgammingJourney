#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Series type: 1+2^(n-1)+3^(n-2)+4^(n-3)+5^(n-4)+......+(n-1)^2+n\n";
  long double sum=0;

    cout<<"Enter the value of n:";
    cin>>n;

    if(n<=0){
        cout<<"Invalid input\n";
    }else{
      
for(int i=1,j=n;i<=n;i++,j--){
   sum+=pow(i,j);

}


cout<<"SUM : "<<sum<<endl;  

    }
    
    }
    