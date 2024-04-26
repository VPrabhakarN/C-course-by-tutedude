/* Q.3) Write a program that ask for two numbers, compare them and show the maximum. Declare a function called max_two that
compares the numbers and returns the maximum.*/

#include<iostream>

using namespace std;

int max_two(int a, int b);

int main()
{
    int a, b;

    // taking inputs from the user 
    cout << "\nEnter the value of A : ";
    cin >> a;
    cout << "Enter the value of B : ";
    cin >> b;

    cout << "\nChecking the maximum value............\n" << endl;

    // calling function
    if(a != b)
    {
        int ans = max_two(a, b);
        cout << "The maximum value : " << ans << endl << endl;
    }
    else 
    {
        cout << "Both values are equal.\n";
    }
    
    return 0;
}

int max_two(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}