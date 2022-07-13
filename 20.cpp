#include <iostream>
using namespace std;
int main() {
    float c;
    cout << "Input the temperature in Celsius: ";
    cin >> c;
    cout << "The temperature in Celsius: " << c << endl;
    cout << "The temperature in Fahrenheit: " << (9.0/5 * c) + 32;
    return 0;
}