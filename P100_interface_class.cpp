// C++ program to demonstrate interface class

#include<iostream>

using namespace std;

// defining interface class

class Base {
    private :

    public :

    // pure virtual functions only
    virtual void show() = 0;
};

// inheritance 
class Derived : public Base{
    private : 
    int a;

    public :

    // allows method overriding 
    void show(){
        cout << "Derived class function" << endl;
    }
};

int main(){

    // interface class pointer 
    Base *b;

    // Derived class object 
    Derived d;

    // Storing address of derived class into interface class pointer 
    b = &d;

    b->show();

    return 0;
}