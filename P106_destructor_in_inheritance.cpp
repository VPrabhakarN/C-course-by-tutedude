// C++ pragram to demonstrate the destructor in inherited class

#include<iostream>
using namespace std;

// defining base class
class Base {
    public :

    // defining constructor 
    Base(){
        cout << "'Base' class's constructor is called..." << endl;
    }

    // defining destructor 
    ~Base(){
        cout << "'Base' class's destructor is called..." << endl;
    }
};

// inheritance 
class Derived : public Base{
    public :
    
    // defining constructor 
    Derived(){
        cout << "'Derived' class's constructor is called..." << endl;
    }

    // defining destructor 
    ~Derived(){
        cout << "'Derived' class's destructor is called..." << endl;
    }
};

int main(){

    // creating instance of the Base class 
    Base b;
    cout << "Done with Base class...." << endl;

    // creating instnace of the derived class
    Derived d;
    cout << "Done with Derived class.... " << endl;


    return 0;
}