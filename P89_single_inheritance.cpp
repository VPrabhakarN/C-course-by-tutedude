// C++ program to demonstrate single inheritance

#include<iostream>

using namespace std;

// defining a parent class 
class A {
    public :
    A(){
        cout << "Parent class's constructor is called." << endl;
    }
};

// inheritance 
class B : public A{
    public :
    B(){
        cout << "Child class's constructor is called." << endl;
    }
};

int main(){

    // creating an instance or object of Child class 
    B ch;
    return 0;
}