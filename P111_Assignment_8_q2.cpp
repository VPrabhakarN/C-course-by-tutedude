// Q.2) write program that demonstrates destructors in C++ is given as follows 

#include<iostream>

using namespace std;

// Defining class
class A {
    public :

    // defining constructor
    A(){
        cout << "This is A class's constructor...." << endl;
    }

    // defining destructor
    ~A(){
        cout << "This is A class's destructor...." << endl;
    }
};

int main(){

    // creating instance of class A 
    A a;

    return 0;
}