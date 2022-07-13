#include <iostream>
using namespace std;
int main() {
    float c;
    cout << "Input the temperature in Celsius: ";
    cin >> c;
    cout << "The temperature in Celsius: " << c << endl;
    cout << "The temperature in Kelvin: " <<  c + 273.15;
    return 0;
}