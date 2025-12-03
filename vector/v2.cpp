#include<vector>
#include<iostream>

using namespace std;

int main(){

    vector<int>vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    cout<<"elements of vector: \n";
    for(int i:vec){
        cout<<i<<endl;
    }

    cout<<"size: "<<vec.size()<<endl;
    cout<<"capacity: "<<vec.capacity()<<endl;
    

}