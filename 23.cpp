#include <iostream>
using namespace std;
int main() {
    double distance;
    cout << "Input the distance in kilometer: ";
    cin >> distance;

    cout << "The " << distance << " Km./hr. means " << distance * 0.621371 <<" Miles/hr.";
    return 0;
}