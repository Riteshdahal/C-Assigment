#include<iostream>
using namespace std;

void Values(int*,int*,int*,int*,int*,int*,float*,float*);
 

 int main(){
     int a1,b1,m1,c1,d1,n1;
     float x1,y1;
     cout<<"Enter the Linear Equations\n ";
     cout<<"\n";
     cout<<"ax+by=m \n Enter the Value of First equation in the form of a,b,m";
    cin>>a1>>b1>>m1;
    cout<<"cx+dy=n \n Enter the Value of Second equation in the form of c,d,n";
    cin>>c1>>d1>>n1;

    
    cout<<a1<<b1<<m1<<c1<<d1<<n1;
    Values(&a1,&b1, &m1,&c1,&d1,&n1,&x1,&y1);
   

    cout<<"The Solutions are :"<< "\n" <<"X:"<< x1<<"\n"<<"Y:"<< y1<<"\n";
     
 }
void Values(int*a1,int*b1,int*m1,int*c1,int*d1,int*n1,float*x1,float*y1){
    *x1=((*m1)*(*d1)-(*b1)*(*n1))/((*a1)*(*d1)-(*c1)*(*b1));

    *y1=((*n1)*(*a1)- (*m1)*(*c1))/ ((*a1)*(*d1)-(*c1)*(*b1));

   
}