#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int length1, length2, angle;
    cout << "Input the length of a side of the triangle: ";
    cin >> length1;
    cout << "Input the length of another side of the triangle: ";
    cin >> length2;
    cout << "Input the angle between these sides of the triangle: ";
    cin >> angle;
    double s;
    s = (length1+length2+angle)/2;
    cout << "The area of the Scalene Triangle is: " << sqrt(s*(s-length1)*(s-length2)*(s-angle));
    return 0;
}