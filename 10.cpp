#include <iostream>
#include <ctype.h>
#include <iomanip>
using namespace std;
int main() {
    float pi;
    cout << "The value of pi: ";
    cin >> pi;
    std::cout << "The value of pi 4 decimal place of total width 8: " << std::setprecision(8) << pi << endl;
    std::cout << "The value of pi 4 decimal place of total width 10: " << std::setprecision(10) << pi << endl;
    std::cout << "The value of pi in scientific format is: " << std::setprecision(4) << std::scientific << pi << endl;
    cout << "Status in number: " << isalpha(pi) << endl;
    cout << "Status in alphabet: " << isdigit(pi);

    return 0;
}