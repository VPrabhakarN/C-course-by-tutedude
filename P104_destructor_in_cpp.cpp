// C++ program to demonstrate the destructor in the class

#include<iostream>
using namespace std;

// defining a class 
class A {

    public :

    // constructor is defined
    A(){
        cout << "'A' class's constructor is called..." << endl;
    }

    // destructor is defined 
    ~A(){
        cout << "'A' class's destructor is defined...." << endl;
    }
};

int main(){

    // creating an instance of the class 'A' 
    A a;
    
    return 0;
}