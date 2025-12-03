#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;



int main(){

    vector <int> v1={1,2,3,4,5,6};

    v1.insert(v1.begin()+2,33);

    for(int i: v1){
        cout<<i<<endl;
    }

    return 0;
}