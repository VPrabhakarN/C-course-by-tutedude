// C++ program to demonstrate virtual function

#include<iostream>

using namespace std;

// defining a Base class
class Base {
    public :
    int a, b;

    public :
    Base(){
        a = 0;
        b = 0;
    }

    virtual void output() = 0;
};

// Derived class 
class Derived : public Base {
    public :
    int c, d;

    Derived(){
        c = 0;
        d = 0;
    }

    void output(){
        cout << "Derived class Function." << endl;
    }
};

// NewClass is defining 
class NewClass : public Base{
    public :
    int e, f;

    NewClass(){
        e = 0;
        f = 0;
    }

    void output(){
        cout << "Newclass class's function." << endl;
    }
};

int main(){

    Derived d;
    Base *b = &d;

    b->output();

    NewClass n;
    b = &n;
    b->output();

    return 0;
}