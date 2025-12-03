#include<iostream>
#include<string.h>


using namespace std;

int main(){

    char name[25];
    cout<<"Enter your full name:";
    
    fgets(name,25,stdin);
 

    if(strlen(name)-1 > 12){
        cout<<"Your name can't be over 12 characters"<<endl;
    }
else{
    cout<<"Welcome "<<name;
    
    
}

cout<<"Length: "<<strlen(name)-1<<endl;;

    
}