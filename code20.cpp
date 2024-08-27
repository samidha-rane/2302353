#include <iostream>
using namespace std;

//simple i/o program//

class first{
    public:
    string my_string;
    int num;
    

    void display(){
        cout<<"accessing class instances"<<"\n";
        cout<<my_string<<"\n";
        cout<<num<<"\n";

    }
};

int main(){
    first a;
    
     a.my_string="hello world" ;
     a.num=23;
     a.display();


return 0;
}