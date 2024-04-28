// Q.1) Write any program to demonstrate C++ Structures

#include<iostream>
using namespace std;

struct demo
{
    int a;
    string b;
};

int main() {
    demo person;

    // Taking values from the user
    cout << "Enter age: ";
    cin >> person.a;

    cout << "Enter name: ";
    cin.ignore(); // To consume the newline character left in the buffer
    getline(cin, person.b);

    // Displaying the values
    cout << "Age: " << person.a << endl;
    cout << "Name: " << person.b << endl;

    return 0;
}
