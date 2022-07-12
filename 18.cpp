#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float s1, s2, s3;
    cout << "Input the length of 1st side of the triangle: ";
    cin >> s1;
    cout << "Input the length of 2nd side of the triangle: ";
    cin >> s2;
    cout << "Input the length of 3rd side of the triangle: ";
    cin >> s3;
    double s;
    s = (s1+s2+s3)/2;
    cout << "The area of the triangle is: " << sqrt(s*(s-s1)*(s-s2)*(s-s3));
    return 0;
}