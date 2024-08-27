#include <iostream>
using namespace std;


int rectArea(int length, int breadth = 10) {
    return length * breadth;
}

int main() {
    int length, breadth;

   
    cout << "Enter the length of the rectangle: ";
    cin >> length;


  
    cout << "Area with default breadth: " << rectArea(length) << endl;

    return 0;
}

