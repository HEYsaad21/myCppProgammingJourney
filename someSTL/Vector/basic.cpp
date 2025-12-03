#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;



int main(){

    vector <int> v1;

    v1.push_back(3);
    v1.push_back(2);
    v1.push_back(1);
    

    for(int val:v1){
        cout<<val<<endl;
    }cout<<endl;
    v1.pop_back();
    for(int val:v1){
        cout<<val<<endl;
    }
    cout<<"Is empty: "<<v1.empty()<<endl;

    return 0;
}