#include <iostream>
using namespace std;

class parent1{
    public:

    void Display(){
        cout<<"this is parent 1 class"<<"\n";
    }
};

class parent2{
    public:

    void getdata(){
        cout<<"this is parent 2 class"<<"\n";
    }
};

class child:public parent1,public parent2{
  public:
   void display(){
    cout<<"this is display function"<<"\n";
   }

};


int main(){

child obj;
obj.Display();
obj.getdata();
obj.display();

    return 0;
}