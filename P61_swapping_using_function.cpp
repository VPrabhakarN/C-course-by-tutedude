// C++ program to swap two numbers

#include<iostream>

using namespace std;

void swap(int a, int b)
{
    int temp;

    // swapping 
    temp = a;
    a = b;
    b = temp;

    cout << "In function A : " << a << " and B : " << b << endl; 
}

int main()
{
    int a, b;

    // taking input from the user 
    cout << "Enter the value of A and B respectively : ";
    cin >> a >> b;

    // calling a function 
    swap(a,b);
    cout << "Outside of the function A : " << a << " and B : " << b << endl;

    return 0;

}