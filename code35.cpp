#include<iostream>
using namespace std;

class Animal
{
    public:
     void display(){
        cout<<"this is parent class"<<"\n";
     }



};

class Cat:public Animal
{
    public:
    void getdata(){
        cout<<"This is child class"<<"\n";
    }
};

int main(){

    Cat obj;
    obj.display();
    obj.getdata();

    return 0;

}