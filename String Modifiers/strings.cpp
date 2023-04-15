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

    cout << greeting.find("Hello");
    cout << greeting.substr("How");



}