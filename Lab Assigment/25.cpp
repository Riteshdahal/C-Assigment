#include<iostream>
using namespace std;

class Complex{

    int a,b;

    public:

    Complex(){
        a=0;
        b=0;
    }

    Complex(int x, int y){
        a=x;
        b=y;
    }

    void getNumber(){
        cout<<"Enter two Numbers" <<"\n";
        cin>>a>>b;
        Complex(a,b);
    }




    void operator -(){
        a=-a;
        b=-b;
    }

    Complex operator *(Complex&c2){
        Complex M;
        a=-a;
        b=-b;
        M.a = a*c2.a;
        M.b=b*c2.b;
        return M;  
    }


    Complex operator +(Complex&c2){
         Complex M;
        // a=-a;
        // b=-b;
        M.a = a+c2.a;
        M.b=b+c2.b;
        return M;  

    }

    Complex operator-(Complex&c2){
        Complex M;
        M.a = a-c2.a;
        M.b=b-c2.b;
        return M;  

    }

    void operator +=(Complex &c1){
        a+=1;
        b+=1;   
    }
    bool operator==(Complex&c2){
        if(a==c2.a && b==c2.b){
            return true;
        }
        else{
            return false;
        }

    }

    bool operator >(Complex &c2){

        if(a>c2.a||b>c2.b){
            
            return true; 
        }
        else{
            return false;
        }
    }
     bool operator!=(Complex&c2){
        if(a!=c2.a && b!=c2.b){
            return true;
        }
        else{
            return false;
        }

    }
      

    Complex operator ++(){
        ++a;
        ++b;
    }

    Complex operator++(int){
        a++;
        b++;

    }

    
     friend ostream &operator<<( ostream &output, const Complex &D ){
         output<<"A = "<< D.a  <<"\n" <<"B = " << D.b<<"\n";
     }

    void displayNumber(){
        cout<<"Result of A: " <<a<<"\n";
         cout<<" Result of B : " <<b<<"\n";
    }
    

};



int  main(){
    Complex c1;
    Complex c2;
    Complex c3;

     c1.getNumber();

     c2.getNumber();
    -c1;
    cout<<"After Unary Minus" <<"\n";
    c1.displayNumber();
    c3=c1*c2;
    cout<<"After Multiplication : "<< "\n";
    c3.displayNumber(); 
    c3=c1+c2;
    cout<<"After Addition :"<<"\n";
    c3.displayNumber();
    c3=c1-c2;
    cout<<"After Minus: "<<"\n";
    c3.displayNumber();
    c1+= c1;
    cout<<"After Shorthand Operation:"<<"\n";
    c1.displayNumber();

    
    cout<<"After Comparision:" <<"\n";

    if(c1==c2){
        
      cout<<"True" << "\n";
    }
    else{
        cout <<"False" << "\n";
    }
    
    cout<<"After the Greater than Comparision"<<"\n";
    if(c1>c2){
        cout<<"True"<< "\n";
    }
    else{
        cout<<"False "<<"\n";
    }
    

    cout<<"After Not Equal to Comparision:" <<"\n";

    if(c1!=c2){
        
      cout<<"True" << "\n";
    }
    else{
        cout <<"False" << "\n";
    }

    ++c1;
    cout<<"After Pre Increment:" <<"\n";
    c1.displayNumber();

   
   c1++;
    cout<<"After post Increment:" <<"\n";
    c1.displayNumber();


    cout << "First Values : " << c1 << endl;
   cout << "Second Values :" << c2 << endl;
   

    

}