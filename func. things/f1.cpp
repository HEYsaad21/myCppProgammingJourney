#include<iostream>
using namespace std;
void display(int  a=10,int b=20){
    cout<<a<<endl;
    cout<<b<<endl<<endl;
}

int main(){


display();  // no value passes from main()
display(15); // only value for a passes from main()
display(30,50);// passes both a,b from main()

    
}