#include<iostream>
using namespace std;

int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cout<<"Insert value for index "<<i<<" :";
        cin>>arr[i];
    }

    for(int i=0;i<5;i++){
        cout<<"Value of index "<<i<<" :"<<arr[i]<<endl;
       
    }
}