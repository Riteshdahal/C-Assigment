
#include<iostream>
using namespace std;
int Max(int arr[]);

int main(){
    int a[10];
    int max;
    int i,n;
      cout<<"Find the Largest from 10 Numbers\n";
 n=10;

for(i=0;i<n;++i){
    cout<<"Enter number"<<i+1<< " :";
    cin>>a[i];
    
}
for(i=0;i<n;i++){
    cout<<"The  Number You have Entered are:  ";
    cout<<a[i] <<"\n";
   
}

Max(a);


}

int Max (int a[10]){
    int i;
    for (i=0;i<10;i++){
    if(a[0]<a[i]){
        a[0]=a[i];
    }    
    }


cout<<"Largest Number is : "<<a[0];
return 0;

}
