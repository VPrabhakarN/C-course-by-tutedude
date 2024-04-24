// C++ program to compare two string 

#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;

int main()
{
    // defining a char array 
    char user[6] ="Vijay";
    char name[6];

    // taking input from the user 
    cout << "Enter name : ";
    cin >> name;

    //using if else condition 
    if(strcmp(name,user)== 0)
    {
        cout << "Welcome back Vijay" << endl;
    }
    else
    {
        cout << "Invalid username ! Please enter again." << endl;
    }

    return 0;
}