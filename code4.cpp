#include <iostream>
using namespace std;



int main() 
{ 
    float temp, cel;
    cout<< "Enter the temperature in Fahrenheit: "; 
    cin >> temp;
cel = (temp - 32.0) * 5.0 / 9.0;
 cout << "Temperature in Celsius is: " << cel << "\n"; 
return 0; 
}
