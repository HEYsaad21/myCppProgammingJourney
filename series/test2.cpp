#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Series type: 2+4+6+8+......+2n\n";
    int sum=0;

    cout<<"Enter the value of n:";
    cin>>n;

    if(n<=0||n%2!=0){
        cout<<"Invalid input\n";
    }else{
      for(int i=n;i>=1;i--){
         if(i%2==0){
            sum+=i;
         }
        
    }
    cout<<"SUM : "<<sum<<endl;  
    }
    
}