#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Series type: 1+1/2+1/3+1/4+1/5+......+1/n\n";
double sum=0;

    cout<<"Enter the value of n:";
    cin>>n;

    if(n<=0){
        cout<<"Invalid input\n";
    }else{
      
for(int i=1;i<=n;i++){


    sum+=1/(double)i;
}




    }
    cout<<"SUM : "<<sum<<endl;  
    }
    
