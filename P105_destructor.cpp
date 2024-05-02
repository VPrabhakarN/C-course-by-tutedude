// C++ program to demonstrate the destructor

#include<iostream>
using namespace std;

// defining a class 
class A{
    public :
    // constructor is defined 
    A(){
        cout << "'A' class's constructor is called.." << endl;
    }

    // destructor is defined 
    ~A(){
        cout << "'A' class's destructor is called....." << endl;
    }
};

// defining a function
void fun(void){
    A a2;
}

int main(){

    // creating instance of object of the class 
    A a1;

    // Calling a function
    fun();

    cout << "back to the 'int main()' fuction..." << endl;

    return 0;
}