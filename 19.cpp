#include <iostream>
using namespace std;
int main() {
    float r;
    cout << "Input the radius(1/2 of diameter) of a circle: ";
    cin >> r;
    cout << "The area of the circle is: " << 3.14*r*r << endl;
    cout << "The circumference of the circle is: " << 2*r*3.14;
    return 0;
}