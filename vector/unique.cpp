#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>vec={4,1,2,1,2};

    cout<<"Given number list: ";
    for(int i:vec){
        cout<<i<<" ";

    }cout<<endl;
    
    cout<<"unique elements of the list: ";
    for(int i:vec){
        int k=0;
        
        for(int j:vec){

            if(j==i){
                k++;
            }


        }

        if(k==1){
            cout<<i<<" ";
        }



    }cout<<endl;
}
