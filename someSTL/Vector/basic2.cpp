#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;



int main(){

    vector <int> vec1={1,2,3,4,5,6};
    vector <int> vec2={10,9,8,7};

    for(int val:vec1){
        cout<<val<<endl;
    }
    cout<<endl;

    // clearing all values from vector 1
    vec1.clear();
    for(int val:vec1){
        cout<<val<<endl;
    }

     vector <int> vec11(vec2);

     cout<<"Displaying new vector 11 copied from vector 2: "<<endl;
     for(int i:vec11){
        cout<<i<<endl;
     }
    return 0;
}