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
  void diaplay2(){
    cout<<"this is parent class"<<"\n";
  }

};

class child: public parent
{
    public:
    void display3(){
        cout<<"this is child class"<<"\n";
    }
};

int main(){

    child obj;
    obj.display();
    obj.diaplay2();
    obj.display3();
}