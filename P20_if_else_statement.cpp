// C++ program to check the given year is leap year is or not

#include<iostream>

using namespace std;

int main() {
    int year;

    // Taking input from the user 
    cout << "Enter the year : ";
    cin >> year;

    // using if-else statement to check the year is leap or not 
    if(year%4 == 0)
    {
        cout << year << " is the leap year !";
    }
    else 
    {
        cout << year << " is not the leap year !";
    }

    return 0;
}