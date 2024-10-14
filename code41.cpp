#include<iostream>
using namespace std;

class Grandfather{
    
    public:
    void display(){
        cout<<"this is grandfather class"<<"\n";

    }

};

class parent:  virtual public Grandfather
{
  public:
  void display2(){
    cout<<"this is parent class"<<"\n";
  }

};

class child: virtual public Grandfather
{
    public:
    void display3(){
        cout<<"this is child class"<<"\n";
    }
};

class child2: public parent, public child{
    public:
    
    void display4(){
         display();
        display2();
         display3();
        cout<<"this is hybrid class"<<"\n";
    }
};

int main(){
    child2 obj;
    
    obj.display4();

    return 0;
}