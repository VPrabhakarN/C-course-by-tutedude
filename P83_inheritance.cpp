// C++ program to demonstrate inheritance 

#include<iostream>

using namespace std;

// defining a class 
class Parent {

    private :
    int x;

    public :
    int y;
};

// inheritance 
class Child : public Parent{

    private :
    int a;

    public :
    int b;
};

int main(){

    // creating instance of the Parent class 
    Parent p;
    p.y = 1900;
    cout << "Parent class : Y =  " << p.y << endl;

    // creating instance of the Child class
    Child c;
    c.b = 1901;
    cout << "Child class : B = " << c.b << endl;

    // we can access parent'c class element with child class object
    c.y = 1919;
    cout << "Parent class : Upadated values by child class object of Y = " << c.y << endl;

    return 0;
}