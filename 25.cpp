#include <iostream>
using namespace std;
int main() {
    float k;
    cout << "Input the temperature in Kelvin: ";
    cin >> k;
    cout << "The temperature in Kelvin: " << k << endl;
    cout << "The temperature in Celsius : " <<  k - 273.15;
    return 0;
}