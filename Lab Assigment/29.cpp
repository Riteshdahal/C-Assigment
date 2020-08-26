#include<iostream>


using namespace std;

class Time
{
        private:
                int hours, minutes, seconds;
        public:
                Time()
                {
                        hours=minutes=seconds=0;
                }
                friend int operator>>(istream &input, Time &t)  //Overloading >> Operator
                {
                        cout<<"\n Enter Hours   :  ";
                        input>>t.hours;
                        cout<<"\n Enter Minutes :  ";
                        input>>t.minutes;
                        cout<<"\n Enter Seconds :  ";
                        input>>t.seconds;
                        t.minutes = t.minutes + t.seconds / 60;
                        t.seconds %= 60;
                        t.hours = t.hours + t.minutes / 60;
                        t.minutes %= 60;
                        if(t.hours >= 25)
                                return 1;
                        else
                                return 0;
                }
                friend void operator<<(ostream &Output, Time &t)    //Overloading << Operator
                {

                    Output<<t.hours<<":"<<t.minutes<<":"<<t.seconds<<"\n";


                        // Output<<"\n Hours   :  "<<t.hours;
                        // Output<<"\n Minutes :  "<<t.minutes;
                        // Output<<"\n Seconds :  "<<t.seconds <<"\n";
                }

                Time operator +(Time&t1){
    
                        Time t;
                                int a,b;
                                a = seconds+t1.seconds;
                                 t.seconds = a%60;
                                 b = (a/60)+minutes+t1.minutes;
                                t.minutes = b%60;
                                 t.hours = (b/60)+hours+t1.hours;
                                t.hours = t.hours%12;
                                  return t;

}

                void displayTime(){
                    cout<<hours<<":"<<minutes<<":"<<seconds;
                }
               
};
int main()
{
        Time t, t1,t2;
        cout<<"\n Enter First Time ";
        cout<<"\n -------------------- ";
        if(cin>>t)
        {
                cout<<"\n Invalid Time ";
                return 0;
        }
        cout<<"\n First Time ";
        cout<<t;
        cout<<"\n\n Enter Second Time ";
        cout<<"\n -------------------- ";
        if(cin>>t1)
        {
                cout<<"\n Invalid Time ";
                return 0;
        }
        cout<<"\n Second Time ";
        cout<<t1;
         t2=t+t1;
        cout<<"Added Time \n";
        cout<<t2;
        
}