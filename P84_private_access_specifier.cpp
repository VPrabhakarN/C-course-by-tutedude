// C++ program to define 'private' access specifier

#include<iostream>

using namespace std;

// defining parent class
class Parent {
    private :
    int a;

    protected :
    int b;

    public :
    int c; 
};

// inheritance as 'private' access specifire

class Child : private Parent{
    private :
    int x;

    protected :
    int y;

    public :
    int z;
};

int main(){

    // Creating instance of a child class 
     Child s;
     s.z = 19;

     cout << "C : " << s.z << endl;

     cout << "**** When we inherit child class from parent class using private access specifie ****" << endl;
     cout << "Parent class's private is never inherited." << endl;
     cout << "Parent class's protected become protected as it is." << endl;
     cout << "Parent class's public become private." << endl;

    return 0;
}