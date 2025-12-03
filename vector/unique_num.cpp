#include<iostream>
#include<vector>

using namespace std;

int uniqueNum(vector<int>& num){

    int unique=0;

    for(int val:num){
        unique=unique^val;
    }

    return unique;

}

int main(){
    vector<int>vec={4,1,2,1,2};

    cout<<"Given number list: ";
    for(int i:vec){
        cout<<i<<" ";

    }cout<<endl;

    cout<<"unique number: "<<uniqueNum(vec)<<endl;


    
    

 
}
