// C++ program to define 'protected' specifier 

#include<iostream>

using namespace std;

// defining a parent class 
class Parent {
    private : 
    int a;

    protected :
    int b;

    public :
    int c;
};

// defining a child class
class Child : protected Parent{
    private :
    int x;

    protected :
    int y;

    public :
    int z;
};

int main(){

    // creating instance or object of Child class 
    Child ch;
    ch.z = 19;

    cout << "Z : " << ch.z << endl;

    cout << "***When we inherit child class from the parent class using 'protected' specifier****" << endl;
    cout << "Parent's class private as we it can't be inherited." << endl;
    cout << "Parent's calss protected as become protected as it is." << endl;
    cout << "Parent's class public become protected" << endl;

    
    return 0;
}