// C++ program to cancate two string

#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;

int main()
{
    // defining char array to get string 
    char user[6] = "Vijay";
    char name[10];

    cout << "Enter last name : ";
    cin >> name;

    // concate
    strcat(user,name);
    cout << user ;

    return 0; 
}