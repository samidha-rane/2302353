#include <iostream>
using namespace std;

class student{
    
    private:
     int roll_no;
     string name;
    
    public:
    
    void setdata(int myroll,string myname){
         roll_no = myroll;
        name = myname;
    }
    
    
     void display(){
      cout << "Roll No: " << roll_no << "\t Name: " << name << "\n";
       
     }
};

int main()
{
   student a;
   a.setdata(2302353 ,"Samidha");
   a.display();

    return 0;
}



