#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;



int main(){

    int n;

    cout<<"Enter the capacity of vector: ";cin>>n;
    vector <int> vec(n);

    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    cout<<endl<<"Entered elements are :"<<endl;

    for(int val : vec){
        cout<<val<<endl;
    }


    return 0;
}