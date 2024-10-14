#include<iostream>
using namespace std;



   class student{

    protected:
    int id;
    string name;

    void display(){
        cout<<" Enter your id:"<<"\t";
        cin>>id;
        cout<<" Enter your name:"<<"\t";
        cin>>name;


    }


   };

   class detail: public student
   {
    public:
    void getdata(){
        cout<<"name:"<<"\n";
        cout<<"id"<<"\n";
        display();
    }
};


   int main (){

    detail obj;
  
    obj.getdata();



    return 0;

}