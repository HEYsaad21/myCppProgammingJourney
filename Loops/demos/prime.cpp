#include<iostream>
using namespace std;

int main(){
    int k=1,n;
    cout<<"Enter a number:";
    cin>>n;
    if(n<=0||n==1){
        cout<<"Not a prime\n";
        if(n<0){
            cout<<"NEGATIVE\n";
        }
    }
    else{
        for(int i=2;i<=n-1;i++){
            if(n%i==0){
                k=0;
            }
        }
    }

if(n>1){
    if(k==1){
        cout<<n<<" is a prime!\n";
    }else{
        cout<<"Not a prime\n";
    }
}
    
}