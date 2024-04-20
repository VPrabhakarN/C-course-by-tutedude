// C++ program to demonstrate the 'switch case'

#include<iostream>

using namespace std;

int main()
{
    int cgpa;

    // taking input from the user 
    cout << "Enter yout CGPA : ";
    cin >> cgpa;

    // Using 'switch case'
    switch(cgpa)
    {
        case 0 :
                cout << "Failed";
                break;

        case 1 : 
                cout << "You need to work very hard....!";
                break;

        case 2 : 
                cout << "You need to improve your performance..!";
                break;

        case 3 : 
                cout << "You are almost there Keep it up ... !";
                break;

        case 4 : 
                cout << "You nailed it....! Keep it up ";
                break;

        default :
                cout << "You rocked it...! Keep it high";
                break;
    }

    return 0;
}