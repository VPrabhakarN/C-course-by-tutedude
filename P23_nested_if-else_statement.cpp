// C++ program to demonstrate 'nested if-else statement' 

#include<iostream>

using namespace std;

int main()
{
    int score;

    // taking input from the user 
    cout << "Enter your score : ";
    cin >> score;

    // using nested 'if-else statement'
    if(score >=60)
    {
        if(score >= 90)
        {
            cout << "You rocked it....! Keep it up";
        }
        else 
        {
            cout << "You gave your best... !";
        }
    }
    else 
    {
        cout << "You need to work hard...!";
    }

    return 0;
}