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
// print through iterator 

vector <int> :: iterator  i;      // kind of pointer


for( i= vec.begin();i!=vec.end();i++){
cout<<*(i)<<endl;
}




    return 0;
}