// C++ program to demonstrate a structure 

#include<iostream>

using namespace std;

// defining a structure
struct complex_num {
    int real;
    int imag;
};

int main()
{
    complex_num a, b, c;

    // taking input from the user 
    cout << " Enter the real and imaginary parts of the complext number respectively" << endl;
    cin >> a.real >> a.imag;
    cin >> b.real >> b.imag;

    cout << "Adding............" << endl;

    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;

    cout << c.real << " +i" << c.imag << endl;

    return 0;
}