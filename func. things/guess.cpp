#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){ int x,R,k=1;

    while(k==1){

cout<<"\n\tGuess a Number between 1 to 5: ";
    cin>>x;

R=rand()%6 + 1;

    cout<<"\n\tI guessed "<<R<<endl;
    cout<<"\tYou guessed "<<x<<endl<<endl;

    if(R==x){
        cout<<"\tCongratulations !! You Win !"<<endl;
    }else{
        cout<<"\tYou Lost! Try again"<<endl;
    }

    cout<<"\t(press 0 to quit and 1 to retry) ";
    cin>>k;

    }cout<<"\tGame Ended!\n\n";
    
}