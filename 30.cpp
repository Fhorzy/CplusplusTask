#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3, num4;
    cout << "Input 1st two numbers (separated by space): ";
    cin >> num1;
    cin >> num2;
    cout << "Input last two numbers (separated by space): ";
    cin >> num3;
    cin >> num4;

    cout << "The total of four numbers is: " << num1+num2+num3+num4 << endl;
    cout << "The average of four numbers is: " << (num1+num2+num3+num4)/4.0;
    return 0;
}