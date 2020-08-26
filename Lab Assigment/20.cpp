#include<iostream>
#include<cmath>
using namespace std;



int main(){
    float a,b,c,discrimant,x1,x2,realPart,imaginaryPart;
    cout<<"Welcome to Calculate the Roots of Quadratic Equations\n";
    cout<<"ax2+bx+c\n Enter the a,b,c of equation \n";
    cin>>a>>b>>c;
    if(a==0){
        cout<<"This is not form of Quadratic Equation \n";
    }
    else{
         cout<<"The Coeffient of Quardratic equations are \n "<<a <<b<<c<<"\n";

         discrimant=b*b-4*a*c;

         cout<<"Discrimant = "<<discrimant <<"\n";


         if(discrimant>0){
             cout<<"Both Roots are Real and Different \n";
             x1=(-b+sqrt(discrimant))/2*a;
             x2=(-b+sqrt(discrimant))/2*a;
             cout<< "Root1 ="<< x1<<"\n"<<"Root 2="<<x2<<"\n";
         }
         else if(discrimant==0){
             cout<<"Both Roots are Real and same \n";
             x1=(-b+sqrt(discrimant))/2*a;
             
             cout<< "Root1="<< x1<<"\n"<<"Root2="<<x1<<"\n";
         }

         else{
             cout<<"Both Roots are not same and are Complex \n";
             realPart= -b/(2*a);
             imaginaryPart=sqrt(-discrimant)/(2*a);
             cout<<"Real Part="<<realPart<<"\n"<< "Imaginary Part="<<imaginaryPart<<"\n";
         }

    }
   

}