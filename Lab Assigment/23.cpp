#include<iostream>
#include<cmath>
using namespace std;


class Distance{
    public:
    double distance;
    double x1,y1,x11, y11,x22,y22,x2,y2;

    double getdata(){
        cout<<"Enter the Value of First Co-ordinate::::";
        cin>>x1>>y1;
        if(x1<0||y1<0){
            cout<<"We Are only calculating Distance of First Quadrant so \n Put value again";
            cin>>x1>>x2;
        }
        // else{
        //     x1=x1;
        //     y1=y1;
        // }

        cout<<"Enter the Value of Second Co-ordinate::::";
        cin>>x2>>y2;
         if(x2<0||y2<0){
            cout<<"We Are only calculating Distance of First Quadrant so \n Put value again";
            cin>>x2>>y2;
        }
        // else{
        //     x2=x1;
        //     y2=y1;
        // }

    }

    double distCalculation(){
        distance= sqrt(pow(x2-x1,2)+pow(y2-y1,2));
         return distance;
   
    }
    double displayCalculation(){
         cout<<"Distance between Two Points are ::::"<< distance <<"\n";
        
    }

    
};

int main(){
    Distance D;
    D.getdata();
      D.distCalculation();
      D.displayCalculation();
   
  
    // D.displayCalculation(); 







}