// C++ program to define the length of the string 

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string username ;

    // taking iput from the user 
    cout << "Enter username : ";
    cin >> username;

    // length of the string
    cout << "Size : " << username.size() << endl;

    return 0;
}