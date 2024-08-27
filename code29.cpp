#include <iostream>
using namespace std;

class student{

    int rno;
    string name;
    float fee;
   
   public:
   student(int no,string n,float f){
       rno=no;
       name=n;
       fee=f;
   }

   student(student& t){
    rno =t.no;
    name=t.n;
    fee=t.f;
    cout<<"copy constructor called"<<"\n";


   }

   
   
   void student::display(){
    cout<< rno <<"\t"<<name<<"\t"<<fee<< "\n";
   }




};

int main(){

    student s1(1233 ,"nakul"  ,23000);
    s1.display();

    student s2=s1;
    s2.display();

   return 0;  
}