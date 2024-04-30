// C++ program to demonstrate the pointer as object 

#include<iostream>

using namespace std;

// creating a class
class Demo{
    public :
    int a;

    Demo(){
        cout << "Called constructor...." << endl;
    }

    void setValues(int b){
        a = b;
    }

    void printValues(void){
        cout << "A : " << a << endl;
    }
};

int main(){
    // creating pointer object 
    Demo *d;
    Demo e;
    d = &e;

    d->setValues(12);
    d->printValues();


}