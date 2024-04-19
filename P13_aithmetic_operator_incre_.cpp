// C++ program to define increment operator 

#include<iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 12;

    // before using increment operator 
    cout << "***values before using increment operator***" << endl;
    cout << "Value of a : " << a << endl;
    cout << "Value of b : " << b << endl;

    // using increment operator 
    a++;
    b++;

    // After using increment operator 
    cout << " " << endl;
    cout << "***values after using increment operator***" << endl;
    cout << "Value of a : " << a << endl;
    cout << "Value of b : " << b << endl;

    return 0;
}