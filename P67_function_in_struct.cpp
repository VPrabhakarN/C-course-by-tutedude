#include<iostream>
using namespace std;

// defining a structure
struct complex_num {
    int real;
    int imag;
};

// Function declaration
complex_num add_complex(complex_num, complex_num);

int main() {
    complex_num a, b, c;

    // taking input from the user 
    cout << "Enter the real and imaginary parts of the first complex number respectively" << endl;
    cin >> a.real >> a.imag;
    cout << "Enter the real and imaginary parts of the second complex number respectively" << endl;
    cin >> b.real >> b.imag;

    cout << "Adding............" << endl;

    // Calling the add_complex function
    c = add_complex(a, b);
    cout << "Sum: " << c.real << " + " << c.imag << "i" << endl;

    return 0;
}

// Function definition to add two complex numbers
complex_num add_complex(complex_num a, complex_num b) {
    complex_num output;
    output.real = a.real + b.real;
    output.imag = a.imag + b.imag;
    return output;
}
