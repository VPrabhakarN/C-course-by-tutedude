// C++ program to define 'public' access specifier 

#include<iostream>

using namespace std;

// defining a Parent class 
class Parent {
    private :
    int a;

    protected :
    int b;

    public :
    int c;
};

// defining a child class
class Child : public Parent {
    private :
    int x;

    protected :
    int y;

    public :
    int z;
};

int main(){

    // Creating instance or object of Child class 
    Child ch;
    ch.c = 19;
    cout << "C : " << ch.c << endl;
    ch.z = 2;
    cout << "Z : " << ch.z << endl;

    cout << "****When we inherit child class from parent class using 'public' access specifier****" << endl;
    cout << "Parent class's priavte never ever inherited in any class." << endl;
    cout << "Parent class's protected become as it is protected." << endl;
    cout << "Parent class's public remains public as it is." << endl;

    return 0;
}