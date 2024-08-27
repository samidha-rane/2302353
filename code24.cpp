
#include <iostream>
using namespace std;

class person
{public:
    
    string Name;
    int age;
    
};
int main() {
    person info;
    info.Name="Saniya";
    info.age=19;
    
    cout<<info.Name<<"  is  " <<info.age<<" years old \n";
   
    return 0;
}

