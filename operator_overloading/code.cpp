#include<iostream>
using namespace std;

class Random{
    int num;

    public:
    Random() : num(5){};
    
    void operator++(){
        num=num-2;          // ++ --> --
    }
    void print(){
        cout<<"Number count: "<<num<<endl;
    }

};

int main(){
    Random r;
    ++r;
    r.print();

}