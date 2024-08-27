#include <iostream>
using namespace std;

class inside{
    public:

     void my_function(){
        cout<<"This is inside function"<<"\n";
     }
};

int main(){

    inside B;
    B.my_function();

    return 0;
}