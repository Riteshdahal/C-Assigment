#include<iostream>
#include<iomanip>
using namespace std;


class Rectangle{
public:
        int length,breadth;
      
        float  area,perimeter;
        int l,b;


        void setData(int l, int b){
            length=l;
            breadth=b;

        }
         void display(){
            cout<<"Length:"<<length << "\n"<<"Bredth:"<<breadth <<"\n";
        }


        float Area(){
            return length*breadth;
        }
        float Perimeter(){
             
            return 2*(length+breadth);
            
        }

        void getSide(){


            cout<<"Enter the side of Rectangle:\n Length \n Breadth\n";
            cin>> length>>breadth;
            setData(length,breadth);
            
        
        }
       

       
        


};
int main(){
    Rectangle R;
   R.getSide();
   R.display();
   cout<<"Area= "<< R.Area() <<"\n";
   cout<<"Perimeter= " <<R.Perimeter() <<"\n";
  
    // R.display();
    return 0;
}