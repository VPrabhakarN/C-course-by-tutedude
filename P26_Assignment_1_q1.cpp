// Write a C++ program to find if an integer is even or odd or neither (0).

#include<iostream> 

using namespace std;

int main()
{
    int num;

    // Taking input from the user 
    cout << "Enter the number : ";
    cin >> num ;

    // checking the number is even or odd or 0
    // using 'if-elseif-else' statement
    if(num % 2 == 0)
    {
        cout << num << " is the even number !";
    }
    else if (num == 0)
    {
        cout << num << " is zero (neither even or odd)";
    }
    else 
    {
        cout << num << " is the odd number !";
    }

    return 0;
}