#include<iostream>
using namespace std;
class cube{


    public:
    int side;
    int getVolume();
};

int cube:: getVolume(){
    return side*side*side;
}
int main(){
    cube c1;
    c1.side=4;
    cout<<" \n Volume of Cube "<< c1.getVolume()<<"\n";

}