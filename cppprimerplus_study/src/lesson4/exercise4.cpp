#include <iostream>
#include <string>

int main()
{
    using namespace std;

    string firstName;
    string lastName;

    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;

    string name = firstName + "," + lastName;

    cout << "Here is the information in a single string:"
    << name;
}