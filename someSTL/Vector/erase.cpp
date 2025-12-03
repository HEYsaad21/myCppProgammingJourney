#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;



int main(){

    vector <int> v1={1,2,3,4,5} , v2={6 ,7,8,9};
    
    cout<<"Vector 2: "<<endl;
    for(int i:v2){
        cout<<i<<endl;
    }cout<<endl;
    v2.erase( v2.begin()+ 2 ) ;
    cout<<"Vector 2: "<<endl;
    for(int i:v2){
        cout<<i<<endl;
    }cout<<endl; 


    cout<<"Vector 1: "<<endl;
    for(int i:v1){
        cout<<i<<endl;
    }cout<<endl;

    v1.erase( v1.begin()+1, v1.begin()+4);

    cout<<"Vector 1: "<<endl;
    for(int i:v1){
        cout<<i<<endl;
    }

    return 0;
}