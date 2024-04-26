// Q.1) A person is eligible to vote if his/her age is greater than or equal to 18.

#include<iostream>

using namespace std;

void voting(int n);

int main()
{
    int age;

    // taking input from the user 
    cout << "Enter the age : ";
    cin >> age;

    cout << "Checking eligibility........" << endl;

    // calling function 
    voting(age);

    return 0;
}

void voting(int n)
{
    // using if-else if-else condition 
    if(n<18)
    {
        cout << "You are not eligible for voting!" << endl;
    }
    else
    {
        cout << "Your are eligible for voting!" << endl;
    }
}