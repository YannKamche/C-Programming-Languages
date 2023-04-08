#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    double length, width;

    cout << "Enter the length of your rectangle: " << endl;
    cin >> length;

    cout << endl << "Enter the width: " << endl;
    cin >> width;

    cout << endl << "The perimeter of the rectangle is: " << (length + width) * 2;
    return 0;
}