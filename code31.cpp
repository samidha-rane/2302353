#include <iostream>
using namespace std;

class complex 
{
  public:

     int real;

complex(int a =0){
    real= a;
   

}

complex operator-(complex &c)
{
    return complex(real-c.real);
}
};



int main(){

    complex c1(3),c2(5);
    complex c3=c1-c2;
    cout<<"subtraction  :"<<c3.real<<"\n";



    return 0;
}