#include <iostream>
using namespace std;

class Employee{
  public:

    int id;
    string name;
    float salary;

   Employee(int i, string n,float s ){
      id= i;
      name =n;
      salary =s;    
    
   }
   

    void display(){
    cout<<id<<"  "<<name<<"  "<<salary<<"\n";

   }

};

int main(){
    Employee e1 =Employee(102 ,"sonoo" ,234400);
    Employee e2 =Employee(103 ,"nakul" ,20000);
    e1.display();
    e2.display();
    return 0;
}