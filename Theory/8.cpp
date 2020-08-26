#include<iostream>
using namespace std;



class Number{
    int a,b;

    public:

    Number(){
        int a=0;
        int b=0;


    }
    Number(int c, int d){
        a=c;
        b=d;

    }

    void getNumber(){
        cout<<"Enter Two Number" <<"\n";
        cin>>a>>b;
        Number(a,b);
    }

    void operator ++(){
       cout<<"Increment  "<< ++a <<"\n";
       cout<<"Increment  " <<++b<<"\n";


    }


 Number operator +(Number&n2){
     Number N;
     N.a=a+n2.a;
     N.b=b+n2.b;
     return N;
   

 };
 void display(){

cout<<"After Adding : "<<a<<"\n";
cout<<"After Adding : "<<b<<"\n";
 }


};

int main(){
    Number n1,n2,n3;
    n1.getNumber();
    n1.operator++();
    n2.getNumber();
    n3=n1+n2;
    
    n3.display();



}



