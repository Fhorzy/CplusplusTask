#include <iostream>
#include <limits.h>
using namespace std;
int main() {
    cout << "Overflow the integer range and set in minimum range: " << INT_MIN << endl;
    cout << "Increasing from its minimum range: " << INT_MIN + 1<< endl;
    cout << "Underflow the range and set in maximum range: " << INT_MAX << endl;
    cout << "Decreasing from its maximum range: " << INT_MAX - 1<< endl;

    return 0;
}