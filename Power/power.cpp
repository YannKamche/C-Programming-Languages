#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//Function to calculate the power of a number

//Declaration
double power(double, int);

int main() {
    int exponent;
    double base;

    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    double myPower = power(base, exponent);
    cout << base << " raised to the power " << exponent << " is : " << myPower;

    return 0;
}

//Function definition
double power(double base, int exponent) {
    if (exponent == 0)
        return 1;
    else
        return base * power(base, exponent - 1);
}