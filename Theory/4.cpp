

#include <iostream> 
using namespace std;

class number1{
    int x;
    public:

    number1(){
        x=0;
        cout<<"Object is created";
    }
    ~number1(){
        cout<<"Object is Destructed";
    }
    int getnumber(int a){
        x=a;
        return x;
    }
    int displayNum(){
        return x;
    }
};

int main(){
    number1 num;
     num.getnumber(6);

    cout<<"The Number passsed is"<<num.displayNum()<<endl;
    return 0;
}
