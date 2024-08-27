#include <iostream>
using namespace std;

class Test {
    private:
       static int count;



public:

   Test(){
    count++;
   }

 static int getCount(){
    return count;

 }
   
 static void resetCount(){
      count=0;

 }

   };

int Test::count=0;

int main(){
    cout<<"initial count:"<<Test::getCount()<<"\n";

     Test a1;
     Test a2;


cout <<"Count after creating 2 instances:"<<Test::getCount()<<"\n";
  
    Test a3;

    cout<<"count after creating anather instances:"<<Test::getCount()<<"\n";

   return 0;

}











