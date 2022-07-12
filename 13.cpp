#include <iostream>
using namespace std;
int main() {
    int angka1, angka2, temp;
    cout << "Input 1st number: ";
    cin >> angka1;
    cout << "Input 2nd number: ";
    cin >> angka2;
    temp = angka1;
    angka1 = angka2;
    angka2 = temp;
    cout << "After swapping the 1st number is: " << angka1 << endl;
    cout << "After swapping the 2nd number is: " << angka2;
    return 0;
}