#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;



int main(){
vector <int> v={1,2,3,4,5,6,7};

vector <int> :: iterator i;

for(i=v.begin(); i!= v.end(); i++){
    cout<< *i <<endl;
}
cout<<"*mirror*"<<endl;


vector <int> :: reverse_iterator k;

for(k=v.rbegin(); k!= v.rend(); k++){
    cout<< *k <<endl;
}

cout<<endl<<endl;
cout<<"With 'auto' keyword "<<endl;

for( auto m=v.begin(); m!= v.end(); m++){
    cout<< *m <<endl;
}
cout<<"*mirror*"<<endl;



for( auto n=v.rbegin(); n!= v.rend(); n++){
    cout<< *n <<endl;
}


    return 0;
}