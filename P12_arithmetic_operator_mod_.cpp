// C++ program to define arithmetic operator '%'

#include<iostream>

using namespace std;

int main()
{
    int a, b, c;
    a = 1002;
    b = 3;

    // '%' arithmetic operator is used to get mod
    c = a % b;
    cout << "The mod of the a & b : " << c << endl;

    return 0;
}