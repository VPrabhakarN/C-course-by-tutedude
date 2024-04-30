// C++ program to demonstrate multiple inheritance

#include<iostream>

using namespace std;

// defining parent class 1
class A{
    public :
    A(){
        cout << "Parent class A is inherited." << endl;
    }
};

// defining parent class 2
class B {
    public :
    B(){
        cout << "Parent class B is inherited." << endl;
    }
};

// multiple inheritance 
class C : public A, public B{
    public :
    C(){
        cout << "Child class C's constructor is called." << endl;
    }
};

int main(){

    // creating an instance or object of child class c
    C c;
    return 0;
}