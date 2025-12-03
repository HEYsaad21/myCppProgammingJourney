#include<iostream>
using namespace std;

int main(){
    int arr[5]={5,4,3,2,1};
    int arr1[5]={};

    for(int i=0;i<5;i++){
        arr1[i]=arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<arr1[i]<<endl;
    }
}