// C++ program to define decrement operator 

#include<iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 12;

    // before using decrement operator 
    cout << "***values before using decrement operator***" << endl;
    cout << "Value of a : " << a << endl;
    cout << "Value of b : " << b << endl;

    // using decrement operator 
    a--;
    b--;

    // After using decrement operator 
    cout << " " << endl;
    cout << "***values after using decrement operator***" << endl;
    cout << "Value of a : " << a << endl;
    cout << "Value of b : " << b << endl;

    return 0;
}