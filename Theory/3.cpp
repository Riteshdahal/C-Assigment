#include<iostream>
using namespace std;

class Number1{
    int x,y;
    public:
    // Number1(){
    //     x=0;
    //     y=0;

    // }
    Number1(int a, int b){
        x=a;
        y=b;
    }
     int getdataX(){
        return x ;

    }
     int getdataY(){
        return y;
    }

};
int main(){
    Number1 a(20,30);
    cout<<"Value of X is"<< a.getdataX() <<"value of Y is "<<a.getdataY()<<endl;

}