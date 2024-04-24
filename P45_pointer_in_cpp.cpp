// C++ program to demonstrate pointer 

#include<iostream>

using namespace std;

int main()
{
    // defining variables
    int a = 10;
    int b = 20;

    // defining pointers 
    int *c = &a;
    int *d = &b;

    cout << "A : " << a << "    Pointer : " << c << endl << "B : " << b << "    Pointer : " << d << endl;

    return 0;
}
