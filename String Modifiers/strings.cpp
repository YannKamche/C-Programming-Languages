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

    cout << endl << firstName.append(lastName);
    cout << endl ;
    string greeting = "Hello";
    greeting.pop_back();
    greeting.erase(1);
    

    cout << greeting;

}