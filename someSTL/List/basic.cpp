#include <iostream>
#include<list>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

list <int> L;

int main(){

L.push_back(3);
L.push_back(3);
L.push_back(3);
L.push_front(2);
L.push_front(2);



for(int val:L){ cout<<val<<endl;}
    return 0;

    auto it=L.begin();
    advance(it,2);

    cout<<endl<<*(it);



    return 0;
}