// C++ program to demonstrate two string object and concate

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string firstname, lastname, fullname;

    // taking input from the user as string 
    cout << "Enter first name : " ;
    cin >> firstname;

    cout << "Enter last name : " ;
    cin >> lastname;

    // concate 
    fullname = firstname + " " + lastname;
    
    cout << "\nFull name : " << fullname << endl;

}