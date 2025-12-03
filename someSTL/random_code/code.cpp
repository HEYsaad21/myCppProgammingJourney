#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

template<typename dataType>

void Swap(dataType &a,dataType &b){
    dataType temp=a;
    a=b;
    b=temp;
}


int main(){int k; double a,b;string aa,bb; float aaa,bbb;
   cout<<"Pick datatype to swap\n";
   cout<<"1.Integer\n2.Float\n3.Character\n4.String\n";cin>>k;

   switch (k)
   {
    if(k>=1&&k<=4){
        cout<<"Enter 2 datatypes";

   }


   case 1 :
    cin>>a>>b;
    Swap(a,b);
    cout<<endl<<a<<" "<<b<<endl;

    break;
   case 2 :
    cin>>aaa>>bbb;
    Swap(aaa,bbb);
    cout<<endl<<aaa<<" "<<bbb<<endl;

    break;
   
   case 3 :
    cin>>aa>>bb;
    Swap(aa,bb);
    cout<<endl<<aa<<" "<<bb<<endl;

    break;
   
   case 4 :
    cin>>aa>>bb;
    Swap(aa,bb);
    cout<<endl<<aa<<" "<<bb<<endl;

    break;
   
   default:
   cout<<"Invalid Input";
    break;
   }
   

    return 0;
}