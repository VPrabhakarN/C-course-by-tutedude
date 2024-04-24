// C++ program to copy one string from the another string

#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;

int main()
{
    char user[20];
    char copy_user[20];

    cout<< "Enter name : ";
    cin >> user;

    // copying string from one array to another array
    strcpy(copy_user, user);
    cout<< "Main string : " << user << endl;
    cout << "Copied array : " << copy_user << endl;

    return 0;
}