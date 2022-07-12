#include <iostream>
using namespace std;
int main() {
    int angka1, angka2;
    char op;
    cin >> angka1;
    cin >> op;
    cin >> angka2;
    
    if(op == '+') {
        cout << "Print the sum of two numbers: " << angka1 + angka2;
    }

    if(op == '-') {
        cout << "Print the sum of two numbers: " << angka1 - angka2;

    }

    if(op == '*') {
        cout << "Print the sum of two numbers: " << angka1 * angka2;
    }

    if(op == '/') {
        cout << "Print the sum of two numbers: " << angka1 / angka2;

    }

    return 0;
}