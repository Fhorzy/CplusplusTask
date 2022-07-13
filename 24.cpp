#include <iostream>
using namespace std;
int main() {
    float k;
    cout << "Input the temperature in Kelvin: ";
    cin >> k;
    cout << "The temperature in Kelvin: " << k << endl;
    cout << "The temperature in Fahrenheit: " <<  1.8 * (k - 273.15) + 32;
    return 0;
}