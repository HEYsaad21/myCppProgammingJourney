#include<iostream>
#include<map>
using namespace std;


int main(){
map<string,int>m;

m["tv"]=100;
m["laptops"]=70;
m["headphones"]=50;

for(auto  x : m){
    cout<< x.first<<" "<<x.second<<endl;
}


}