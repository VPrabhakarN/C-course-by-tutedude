// Q.3) Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers.

#include<iostream>

using namespace std;

int main()
{
    int num1 , num2, cal = 0;

    // taking input from the user 
    cout << "Enter the 1st Number : " ;
    cin >> num1;
    cout << "Enter the 2nd Number : " ;
    cin >> num2;

    // using for loop 
    for(int i=1; i<=num1 && i<=num2; ++i)
    {
        if(num1%i == 0 && num2%i==0)
        {
            cal = i;
        }
    }

    // printing the answer 
    cout << "Greatest Common Divisor : " << cal << endl;

    return 0;
}