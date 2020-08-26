#include<iostream>
using namespace std;

class my_distance{

    int meter;
    float centemeter;

    public:
    my_distance(){
        meter=0;
        centemeter=0;

    }

    my_distance(int a, float b){
        meter= a;
        centemeter=b;

    }

     my_distance get_Dist(){
         cout<<"Enter The Value in Meters"<<"\n";
         cin>>meter;
         cout<<"Enter the Value in Centemeter "<<"\n";
         cin>>centemeter;
         my_distance(meter,centemeter);
         
     }
my_distance operator +=(my_distance&d2){

    meter+=d2.meter;
    centemeter+=d2.centemeter;

 
}

    void show_Dist(){

        cout<<"The Distance in meter"<<meter <<"m"<<"\n";

        cout<<"The Distance in centemeter"<<centemeter <<"cm"<<"\n";

    }

};


int main(){

    my_distance d1,d2;
    d1.get_Dist();
    d2.get_Dist();
    d1+=d2;
    d1.show_Dist();
    

}