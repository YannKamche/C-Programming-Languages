#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

/*
- getline(), append(), insert(), pop_back(), replace(), find(), substr(), find_first_of(),
compare()
*/
int main() {
    string firstName;
    string lastName;

    string greeting = "Hello!! How are you doing today?";
    greeting.pop_back();

    cout << greeting.find("today") << endl;
    cout << greeting.substr(8, 3) << endl;
    cout << greeting.find_first_of("i") << endl;

    firstName = "yann is the best";
    if (firstName.compare("yann is the best") == 0) cout << "Equal";



}