#include <iostream>
#define PI 3.145149

//Using declaration
using std::cout;
using std::cin;
using std::endl;

int main()
{
    double radius;
    //Prompt
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = PI * (radius * radius);
    cout << "The area of a circle of radius " << radius << " is " << area;

    return 0; 
}