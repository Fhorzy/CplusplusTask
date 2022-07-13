#include <iostream>
using namespace std;
int main() {
    float f;
    cout << "Input the temperature in Fahrenheit: ";
    cin >> f;
    cout << "The temperature in Fahrenheit: " << f << endl;
    cout << "The temperature in Celsius: " << 5.0/9 * (f - 32);
    return 0;
}