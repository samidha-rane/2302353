#include<iostream>
using namespace std;

class myclass{
    public:
    void show(){
    cout<<"This is de reference oprator ->"<<"\n";
    }
};

class Base{

    public :
    void display(){
        cout<<"This is display function"<<"\n";
    }


};
int main(){
    myclass obj;
    myclass *ptr=&obj;
    ptr->display();
    ptr->show();
    
    return 0;
}