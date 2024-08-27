#include <iostream>
using namespace std;

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
  
}

int main() {
    int num1, num2;

   
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    
    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 <<"\n";

  
    swapByValue(num1, num2);

  
    cout << "After swapByValue (in main): num1 = " << num1 << ", num2 = " << num2 <<"\n";

    return 0;
}
