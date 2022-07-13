#include <iostream>
using namespace std;
int main() {
    float f;
    cout << "Input the temperature in Fahrenheit: ";
    cin >> f;
    cout << "The temperature in Fahrenheit: " <<  f << endl;
    cout << "The temperature in Kelvin: " << (f - 32) * 5.0/9 + 273.15;
    return 0;
}