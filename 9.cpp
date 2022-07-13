#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "The number is: ";
    cin >> number;
    cout << "After post increment by 1 the number is: " << number++ << endl;
    cout << "After pre increment by 1 the number is: " << ++number << endl;
    cout << "After increasing by 1 the number is: " << number+1 << endl;
    cout << "After post decrement by 1 the number is: " << number-- << endl;
    cout << "After pre decrement by 1 the number is: " << --number << endl;
    cout << "After decreasing by 1 the number is: " << number-1 << endl;

    return 0;
}