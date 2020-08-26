#include <iostream>
using namespace std;
class shape{
	public:
	double side1;
	double side2;
		shape(){
			side1=0;
			side2=0;
		}
		shape(double x, double y){
			side1=x;
			side2=y;
		}
		void get_data(double x,double y){
			side1=x;
			side2=y;
		}
		virtual void display_are()=0;
	};
		class rectangle:public shape{
			public:
				void display_are()
				{
					cout<<side1*side2;
				}
		};
	    class traingle:public shape{
	    	public:
	    		void display_are(){
	    			cout<<(side1*side2)/2;
				}
		};
int main()
{
    rectangle rect;
	traingle tri;
	rect.get_data(7,7);
	cout<<"total area of rectangle=";
	rect.display_are();
	tri.get_data(7,7);
	cout<<endl<<"the area of triangle is=";
	tri.display_are();
return 0;
}