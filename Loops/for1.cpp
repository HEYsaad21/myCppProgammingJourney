#include<iostream>
using namespace std;

int main(){
    char str[16];
    int n;
    cout<<"Enter a string:";
    fgets(str,16,stdin);

    cout<<"How many time do you want to repeat? :";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<str<<" :"<<i+1<<endl;
    }

}