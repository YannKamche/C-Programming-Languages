#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

void getNames();
string myFullName()
void printFullName();

int main() {

    
    int fullNameLength = fullName.length();
    cout << "Your Name has a length of " << fullNameLength << std::endl;

    string greetings = "Hello";
    string userName;
    cout << "Enter your username" << std::endl;
    cin >> userName;

    cout << greetings + " there!! " + userName;

    
    return 0;
}

string myFullName(string firstName, string lastName) {
    
    cout << "Enter your firstName : ";
    cin >> firstName;
    cout << "Enter your lastName: ";
    cin >> lastName;
    
    return firstName + lastName;
}
void printFullName() {
}