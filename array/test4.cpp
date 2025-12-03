#include<iostream>
using namespace std;

int main(){

int arr[1][2][3][4],z=1;;

for(int i=0;i<1;i++){
    for(int j=0;j<2;j++){
        for(int k=0;k<3;k++){
            for(int l=0;l<4;l++){

                arr[i][j][k][l]=z;
                z++;
            }
        }
    }
}

for(int i=0;i<1;i++){
    for(int j=0;j<2;j++){
        for(int k=0;k<3;k++){
            for(int l=0;l<4;l++){

                cout<<arr[i][j][k][l]<<endl;
            }
       }
    }
}

}