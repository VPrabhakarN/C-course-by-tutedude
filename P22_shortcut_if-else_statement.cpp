// C++ program to demonstrate the short cut for 'if-else' statement

#include<iostream>

using namespace std;

int main()
{
    int score;

    // taking value from the user 
    cout << "Enter your score : ";
    cin >> score;

    // using 'if-elsei statement in short 
    string status = (score >= 35) ? "Pass" : "Fail";

    cout << "You are " << status;

    return 0;
}