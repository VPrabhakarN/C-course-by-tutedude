// C++ program to demonstrate the abstract class 

#include<iostream>

using namespace std;

// defining abstract class 
class Base {

    private :
    int a;

    public :

    // pure virtual function
    virtual void show() = 0;
};

// inheritance 
class Derived : public Base{
    // private element 
    int b;

    public :

    // method overriding 
    void show (){
        cout << "Derived class function is called." << endl;
    }
};

int main(){

    // Creating pointer of abstract class base
    Base *b;

    // Creating object of Derived class 
    Derived d;

    // Storing adress of derived class object into abstarct class pointer 
    b = &d;

    b->show();
    
    return 0;
}