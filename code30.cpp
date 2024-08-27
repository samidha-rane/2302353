#include<iostream>
using namespace std;

class student{
    public:

    string name;
    int age;

    private:

     int rno ;
     string std;


     public:
     void d(int r,string s){
        rno=r;
        std=s;
     }
     void display()
{
    cout<<name<<"  "<<"\n"<<age<<" "<<"\n"<<rno<<""<<"\n"<<std<<""<<"\n";
}



};

int main(){

    student student1;
    student1.age=19;
    student1.name="Fatima Sayed";
     student1.d(2302337,"SyBsc");
     student1.display(); 
return 0;   
    
}