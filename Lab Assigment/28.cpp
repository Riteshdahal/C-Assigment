#include<iostream>
using namespace std;

class Time{

int h ,m,s;
public:
Time(){
    h=0;
    m=0;
    s=0;

}

Time (int hour, int minute, int second){
    h=hour;
    m=minute;
    s=second;
}

Time setTime(){
    cout<<"Enter the Time in Hours" <<"\n";
    cin>>h;
    cout<<"Enter the Time in Minutes"<<"\n";
    cin>>m;
    cout<<"Enter the Time in Second"<<"\n";
    cin>>s;

    Time(h,m,s);

}

void displayTime(){
     cout<< h<< ":"<< m<< ":"<< s;
}

Time operator +(Time&t2){
    
    Time t;
    int a,b;
    a = s+t2.s;
    t.s = a%60;
    b = (a/60)+m+t2.m;
    t.m = b%60;
    t.h = (b/60)+h+t2.h;
    t.h = t.h%12;
    return t;

}

};


int main(){
    Time t1,t2,t3;
    t1.setTime();
    t2.setTime();
    t3=t1+t2;
     cout << "\n First time ";
    t1.displayTime();
    cout << "\n Second time ";
    t2.displayTime();
    cout << "\n Sum of times ";
    t3.displayTime();
    





}