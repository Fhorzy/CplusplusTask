#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Input a number: ";
    cin >> num;
    
    if (num > 0) {
        cout << "The entered number is positive.";
    }

    if (num < 0) {
        cout << "The entered number is negative.";
    }

    if (num == 0) {
        cout << "The entered number is zero.";
    }

    return 0;
}