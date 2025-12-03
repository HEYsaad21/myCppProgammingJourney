#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class point{
    int x,y;

    public :
    point(int a=0,int b=0){x=a,y=b;}

point operator+(point obj){
    return point(x+obj.x , y+obj.y);
}

bool operator == (point obj){
    return (x==obj.x)&&(y==obj.y);
}



point operator+=(point obj){
    
    this->x=this->x+obj.x;
    this->y=this->y+obj.y;

    return *this;
}






void show(){
    cout<<x<<','<<y<<endl;
}




friend point operator++(point,int);

};

point operator++(point &obj,int a){
 point t=obj; 
   obj.x=obj.x+1;
    obj.y=obj.y+1;

    return t;

}

int main(){
    point c(2,3),c1(2,3);

    //point res=c+c1;
    //res.show();
   // cout<< (c1==c);

//c+=c1;

//c.show();
++c;

c.show();




    return 0;
}