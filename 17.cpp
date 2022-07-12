#include <iostream>
using namespace std;
int main() {
    float l, w;
    cout << "Input the length of the rectangle: ";
    cin >> l;
    cout << "Input the width of the rectangle: ";
    cin >> w;
    cout << "The area of the rectangle is: " << l*w << endl;
    cout << "The perimeter of the rectangle is: " << 2*l + 2*w;
    return 0;
}