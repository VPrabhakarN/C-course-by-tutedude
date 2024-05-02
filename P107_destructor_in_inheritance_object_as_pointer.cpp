// C++ program to demonstrate the destructor in inheritance and creating object using the pointer 

#include<iostream>

using namespace std;

// defining Base class 
class Base {
    public :

    // defining constructor 
    Base(){
        cout << "Base class constructor is called..." << endl;
    }

    // defining destructor is called
    ~Base(){
        cout << "Base class destructor is called..." << endl;
    }
};

// inheritance 
class Derived : public Base{
    public :

    // defining constructor 
    Derived(){
        cout << "Derived class constructor is called..." << endl;
    }

    // destructor is called 
    ~Derived(){
        cout << "Derived class destructor is called..." << endl;
    }
};

int main(){

    // creating pointer of object of base class
    Base *b;

    // creating object of derived class
    Derived d;

    // storing address into pointer 
    b = &d;

    return 0;
}