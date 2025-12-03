#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;



int main(){

    vector<int> vec1={1,3,5,7};
    vector<int> vec2={0,2,4,6,8};
     
    vec1.push_back(9);
    cout<<"Size of vector 1: "<<vec1.size()<<endl;
    cout<<"capacity of vector 1: "<<vec1.capacity()<<endl;

    vec1.swap(vec2);

    cout<<endl<<"Displaying vector 1 after swaping it with vector 2:"<<endl;
    for(int val : vec1){
        cout<<val<<endl;
    }
    return 0;
}