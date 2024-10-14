#include<iostream>
using namespace std;

class A{
    public:
        A(){
        cout<<"This is class A"<<"\n";
        }
    


~A(){
     cout<<"This is destractor class of class A"<<"\n";  
}
};

class B :public A{

    public:

    B(){
        cout<<"This is class B"<<"\n";
    }

    ~B(){
        cout<<"This is destractor class of class B"<<"\n";
    }

};

int main(){

 
    B obj1;
    
}