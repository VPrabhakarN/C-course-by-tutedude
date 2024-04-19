// C++ program to define compund operator

#include<iostream>

using namespace std;

int main()
{
    int a = 2000;
    int b = 250;

    // '+=' operator 
    a += b;
    cout << "Value of a : " << a << endl;

    a = 2000;
    // '-=' operator
    a -= b;
    cout << "Value of a : " << a << endl;

    a = 2000;
    // '*=' operator 
    a *= b;
    cout << "Value of a : " << a << endl;

    a = 2000;
    // '/=' operator 
    a /= b;
    cout << "Value of a : " << a << endl;

    a = 2000;
    // '%=' operator 
    a %= b;
    cout << "Value of a : " << a << endl; 
}