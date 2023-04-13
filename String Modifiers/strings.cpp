#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    string firstName;
    string lastName;

    cout << "Enter your firstName: ";
    cin >> firstName;

    cout << "Enter your lastName: ";
    cin >> lastName;

    string fullName;
    fullName = firstName + lastName;

    cout << "Your full Name is: " + fullName;
}