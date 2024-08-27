#include <iostream>

using namespace std;

class player{
    public:
    string player_name,address;
    int age, height;
    static int countobj;
     player(){
        player_name="shreya";
        address="mapusa,goa";
        age=20;
        height=157;
        countobj++;

        
     }

void display(){
    cout<<"player name=" <<player_name<<"\n";
    cout<<"Address="<<address<<"\n";
    cout<<"age="<<age<<"\n";
    cout<<"height"<<height<<"\n";
    cout<<"countobj"<<countobj;

}    


};

int player::countobj;
int main(){

    player a,b;
    a.display();

 return 0;
}