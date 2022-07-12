#include <iostream>
using namespace std;
int main() {
    float r;
    cout << "Input the radius of a sphere: ";
    cin >> r;
    cout << "The volume of a sphere is: " << (4.0/3) * (3.14) * (r * r * r);
    return 0;
}