#include<iostream>
using namespace std;

int main(){
    int arr[10]={50,80,77,48,85,90,68,56,100,75};
    int sum=0;


    int max=-99999,min=+99999;
    for(int i=0;i<10;i++){
           if( arr[i]>max){
            max=arr[i];
           }if(arr[i]<min){
            min=arr[i];
           }

           sum+=arr[i];
    }


    cout<<"SUM= "<<sum<<endl;
    cout<<"MAX= "<<max<<endl;
    cout<<"MIN= "<<min<<endl;
    cout<<"AVG= "<<sum/10.0<<endl;

}