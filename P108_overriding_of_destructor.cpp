// C++ program to override the destructor 

#include<iostream>
using namespace std;

// defining base class
class Base{
    public :

    // defining constructor
    Base(){
        cout << "Base class constructor is called..." << endl;
    }

    // defining virtual destructor for runtime polymorphism by overriding it
    virtual ~Base(){
        cout << "Base class destructor is called..."<< endl;
    }
};

// inheritance 
class Derived : public Base{
    public :

    // defining constructor 
    Derived(){
        cout << "Derived class constructor is called...." << endl;
    }

    // defining destructor 
    ~Derived(){
        cout << "Derived class constructor is called..." << endl;
    }
};

int main(){

    // creating an instance of the derived class
    Derived d;

    return 0;
}