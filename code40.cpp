#include<iostream>
using namespace std;

class Grandfather{
    
    public:
    void display(){
        cout<<"this is grandfather class"<<"\n";

    }

};

class parent: public Grandfather
{
  public:
  void display2(){
    cout<<"this is parent class"<<"\n";
  }

};

class child: public Grandfather
{
    public:
    void display3(){
        cout<<"this is child class"<<"\n";
    }
};

int main(){
    parent obj;
    child obj1;
    obj.display();
    obj.display2();
    obj1.display();
    obj1.display3();

    return 0;
}