#include<iostream>
using namespace std;

class Animal
{
    protected:
     void display(){
        cout<<"this is parent class"<<"\n";
     }



};

class Cat:public Animal
{
    public:
    void getdata(){
        cout<<"This is child class"<<"\n";
        display();
    }
};

int main(){

    Cat obj;
    obj.getdata();

    return 0;

}