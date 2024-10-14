#include <iostream>
using namespace std;

class item{
    public:
    static int count;
    int num;
  
  
    void getdata(int a=3){
      num=a;
      cout<<"value:"<<num<<"\n";
      count++;
    }
 };

 int main(){

    item obj;
    obj.getdata();
      
      return 0;
 }
