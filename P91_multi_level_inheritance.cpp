// C++ program to demonstrate multi level inheritance

#include<iostream>

using namespace std;

// defining Grand-Parent class
class A {
    public :
    A(){
        cout << "Grand Parent class is inherited..." << endl;
    }
};

// single inheritane 
class B : public A{
    public :
    B(){
        cout << "Parent class is inherited..." << endl;
    }
};

// multi level inheritance 
class C : public B{
    public :
    C(){
        cout << "Grand child claas's constructor is called...." << endl;
    }
};

int main(){

    // creating an instance or object of grand child class
    C c;

    return 0;
}