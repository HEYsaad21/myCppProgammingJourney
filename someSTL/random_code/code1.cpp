#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

template <typename myType>

myType maxx(myType arr[],int n){
    myType mx=arr[0];
    for(int i=0;i<n;i++) if(arr[i]>mx) mx=arr[i];

    return mx;
}
int main(){
    int arr[5]={6,8,9,-7,10};
    cout<<"max: "<<maxx(arr,5)<<endl;

    string string_arr[5]={"apple","avocado","banana","orange","kiwi"};
        cout<<"max: "<<maxx(string_arr,5)<<endl;



    return 0;
}