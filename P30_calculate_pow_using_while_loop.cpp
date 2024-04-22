// C++ program to calculate the nth power of the 2 

#include<iostream>

using namespace std;

int main()
{
    cout << "In this program we will find 2^n" << endl;
    int i, n; 
    long long int val;
    // taking input from the user 
    cout << "Enter the value of exponent n : ";
    cin >> n;

    i = 0; val = 1;
    while(i<n)
    {
        val *= 2;
        i++;
    }

    cout << "2 raised to the power of " << n << " is " << val << endl;
    return 0;
}