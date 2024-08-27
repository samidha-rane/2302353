#include <iostream>
using namespace std;


int main(){
    struct{
        int num;
        string my_string;
    
} my_structure;


my_structure.num=1;

my_structure.my_string="This is simple program with a structure";

cout<<my_structure.num<<"\n";

cout<<my_structure.my_string<<"\n";

return 0;
}