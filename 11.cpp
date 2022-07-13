#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Input the numbers: ";
    cin >> num1;
    cin >> num2;
    cout << "Result of 1st expression is: " << num1+num2 << endl;
    cout << "Result of 2nd expression is: " << (num1+num2)%2 << endl;
    cout << "Result of 3rd expression is: " << num1-num2 << endl;
    cout << "Result of 4th expression is: " << num1*num2 << endl;

    return 0;
}