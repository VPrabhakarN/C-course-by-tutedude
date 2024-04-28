// C++ program to define class 

#include<iostream>

using namespace std;

// defining class
class Testing {
    private :
    int a;
    int b;

    public :
    int c;
    string d;
};

int main()
{
    // Creating instance of a class
    Testing x;

    // storing info into element from the class
    x.c = 19;
    x.d = "vijay Prabhakar Nagane";

    // accessing elements from the class 
    cout << "My name is " << x.d << " and my age is " << x.c << endl;

    return 0;
}